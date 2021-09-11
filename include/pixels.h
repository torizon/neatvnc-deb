/*
 * Copyright (c) 2019 Andri Yngvason
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#pragma once

#include <stdint.h>
#include <unistd.h>

struct rfb_pixel_format;

void pixel32_to_cpixel(uint8_t* restrict dst,
                       const struct rfb_pixel_format* dst_fmt,
                       const uint32_t* restrict src,
                       const struct rfb_pixel_format* src_fmt,
                       size_t bytes_per_cpixel, size_t len);

int rfb_pixfmt_from_fourcc(struct rfb_pixel_format *dst, uint32_t src);
uint32_t rfb_pixfmt_to_fourcc(const struct rfb_pixel_format* fmt);
