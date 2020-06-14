#ifndef DEFINES_H
#define DEFINES_H

// {{{ CANVAS RELATED DEFINES
#define WHITE remarkable_color(0x000FFFFF)
#define GRAY remarkable_color(0x4444)
#define BLACK remarkable_color(0)
#define ERASER_STYLUS -10
#define ERASER_RUBBER -11
// }}}

// {{{ MXCFB DEFINES
#define WAVEFORM_MODE_INIT	0x0	/* Screen goes to white (clears) */
#define WAVEFORM_MODE_DU	0x1	/* Grey->white/grey->black */
#define WAVEFORM_MODE_GC16	0x2	/* High fidelity (flashing) */
#define WAVEFORM_MODE_GC4	0x3	/* Lower fidelity */
#define WAVEFORM_MODE_A2	0x4	/* Fast black/white animation */
#define WAVEFORM_MODE_DU4 0x7
#define WAVEFORM_MODE_AUTO 257

#define TEMP_USE_REMARKABLE_DRAW 0x0018
#define EPDC_FLAG_EXP1 0x270ce20

#define EPDC_FLAG_USE_DITHERING_ALPHA 0x3ff00000
// }}}

// {{{ VARIABLE SIZE DEFINES
#ifdef REMARKABLE
// remarkable uses rgb565_le but is grayscale
#ifdef GRAYSCALE_8BIT
  #define remarkable_color uint8_t
#else
  #define remarkable_color uint16_t
#endif

#define pointer_size uint32_t
#else
// on linux framebuffer we have 32bit colors
#define remarkable_color uint32_t
#define pointer_size uint64_t
#endif
// }}}


// {{{ DISPLAY RELATED DEFINES
#define MTWIDTH 767
#define MTHEIGHT 1023
#define WACOMWIDTH 15725.0
#define WACOMHEIGHT 20967.0
#define DISPLAYWIDTH 1404
#define DISPLAYHEIGHT 1872.0
#define MT_X_SCALAR (float(DISPLAYWIDTH) / float(MTWIDTH));
#define MT_Y_SCALAR (float(DISPLAYHEIGHT) / float(MTHEIGHT));
#define WACOM_X_SCALAR (float(DISPLAYWIDTH) / float(WACOMWIDTH));
#define WACOM_Y_SCALAR (float(DISPLAYHEIGHT) / float(WACOMHEIGHT));
// }}}
#endif
