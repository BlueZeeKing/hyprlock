#pragma once

#include <wayland-client.h>
#include "cursor-shape-v1-protocol.h"

class CCursorShape {
  public:
    CCursorShape(wp_cursor_shape_manager_v1* mgr);

    void     setShape(const wp_cursor_shape_device_v1_shape shape);
    void     hideCursor();

    uint32_t lastCursorSerial = 0;

  private:
    wp_cursor_shape_manager_v1* mgr = nullptr;
    wp_cursor_shape_device_v1*  dev = nullptr;
};