#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

#ifdef CONFIG_VGA_SIZE_800x600
#define SCREEN_W 800
#define SCREEN_H 600
#else
#define SCREEN_W 400
#define SCREEN_H 300
#endif

void __am_gpu_init() {
/*
  int i;
  int w = 400;  // TODO: get the correct width
  int h = 300;  // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
  */
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  //printf("__am_gpu_config:width=%d\theight=%d\n",inw(VGACTL_ADDR),inw(VGACTL_ADDR + 2));
  //int w = inw(VGACTL_ADDR + 2);
  //int h = inw(VGACTL_ADDR);
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = SCREEN_W, .height = SCREEN_H,
    .vmemsz = 0
  };
}
/*
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  uint32_t *pixels = (uint32_t *)(ctl->pixels);
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;

  int fb_base = x + y * SCREEN_W;
  int i_mul_w = 0;

  for(int i = 0; i < h; i ++) {
    for(int j = 0; j < w; j ++) {
        fb[fb_base + j] = pixels[j + i_mul_w];
    }
    fb_base += SCREEN_W;
    i_mul_w += w; 
  }

  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

*/

/* __am_gpu_fbdraw : refined by Claude */
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  uint32_t * restrict pixels = (uint32_t *)(ctl->pixels);
  uint32_t * restrict fb = (uint32_t *)(uintptr_t)FB_ADDR + x + y * SCREEN_W;

  for (int i = 0; i < h; i++) {
    uint32_t *fb_row = fb;
    uint32_t *pixel_row = pixels;

    // 如果w较小，可以考虑完全展开内部循环
    // 这里假设w不太小，使用部分展开
    int j;
    for (j = 0; j < w - 3; j += 4) {
      *fb_row++ = *pixel_row++;
      *fb_row++ = *pixel_row++;
      *fb_row++ = *pixel_row++;
      *fb_row++ = *pixel_row++;
    }
    // 处理剩余的像素
    for (; j < w; j++) {
      *fb_row++ = *pixel_row++;
    }

    fb += SCREEN_W;
    pixels += w;
  }
  
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
