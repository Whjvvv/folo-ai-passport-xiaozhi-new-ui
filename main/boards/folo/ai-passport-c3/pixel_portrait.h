#pragma once

#include <cstdint>

// ============================================================
// 手绘版御姐人物（48x48 代码原生精灵）—— 替换原 pixel_portrait.h
// 设定：粉发 / 白皙 / 红唇 / 黑 choker / 酒红丝绒深V
// 与原仓库保持相同函数签名，无需改动调用方代码。
// 由 portrait_builder.py 生成 —— 修改请改生成器后重新导出。
// ============================================================

enum class PortraitState {
    Idle, Listening, Thinking, Speaking, Sad, Sleepy, Wake
};

// 调色板定义在 DrawPixelPortrait 函数内部，不占用全局命名空间。

template <typename R> inline void FoloBase(R r) {
    r(17, 2, 15, 2, 0x8A4560); r(12, 4, 24, 2, 0x8A4560); r(9, 6, 29, 3, 0x8A4560);
    r(7, 9, 33, 9, 0x8A4560); r(6, 18, 35, 17, 0x8A4560); r(4, 32, 39, 9, 0x8A4560);
    r(3, 40, 41, 4, 0x8A4560); r(16, 4, 16, 2, 0xC86E8F); r(12, 6, 23, 3, 0xC86E8F);
    r(9, 9, 29, 17, 0xC86E8F); r(8, 23, 31, 12, 0xC86E8F); r(6, 34, 35, 7, 0xC86E8F);
    r(5, 40, 37, 2, 0xC86E8F); r(12, 8, 3, 4, 0xE894AD); r(10, 12, 2, 12, 0xE894AD);
    r(8, 27, 2, 9, 0xE894AD); r(6, 37, 2, 3, 0xE894AD); r(30, 7, 4, 2, 0xE894AD);
    r(34, 10, 2, 5, 0xE894AD); r(37, 23, 2, 11, 0xE894AD); r(39, 36, 2, 4, 0xE894AD);
    r(12, 19, 3, 7, 0xE8B49E); r(34, 19, 3, 7, 0xE8B49E); r(14, 12, 20, 16, 0xE8B49E);
    r(16, 27, 16, 4, 0xE8B49E); r(19, 31, 10, 2, 0xE8B49E); r(15, 12, 18, 14, 0xFFD9C8);
    r(16, 25, 16, 4, 0xFFD9C8); r(19, 29, 11, 2, 0xFFD9C8); r(14, 9, 13, 6, 0xC86E8F);
    r(13, 13, 10, 4, 0xC86E8F); r(13, 17, 7, 2, 0xC86E8F); r(13, 19, 4, 2, 0xC86E8F);
    r(23, 9, 4, 4, 0xC86E8F); r(26, 10, 3, 3, 0xC86E8F); r(29, 11, 3, 5, 0xC86E8F);
    r(32, 13, 3, 6, 0xC86E8F); r(16, 10, 2, 5, 0xE894AD); r(20, 9, 2, 4, 0xE894AD);
    r(16, 18, 6, 1, 0x8A4560); r(22, 17, 2, 1, 0x8A4560); r(27, 18, 6, 1, 0x8A4560);
    r(25, 17, 2, 1, 0x8A4560); r(24, 26, 1, 1, 0xE8B49E); r(14, 26, 4, 2, 0xF08FA5);
    r(30, 26, 4, 2, 0xF08FA5); r(20, 31, 9, 7, 0xE8B49E); r(21, 31, 7, 6, 0xFFD9C8);
    r(19, 34, 11, 2, 0x1A1A22); r(23, 34, 3, 2, 0xC03050); r(24, 34, 1, 1, 0xFFF8F6);
    r(14, 36, 21, 2, 0x8A4560); r(10, 38, 29, 3, 0x8A4560); r(8, 41, 33, 6, 0x8A4560);
    r(14, 37, 20, 3, 0x7A1E35); r(11, 40, 27, 2, 0x7A1E35); r(9, 42, 31, 5, 0x7A1E35);
    r(21, 36, 7, 2, 0xFFD9C8); r(22, 38, 5, 2, 0xE8B49E); r(14, 43, 2, 4, 0x5A1428);
    r(34, 43, 2, 4, 0x5A1428); r(19, 44, 11, 1, 0x5A1428);
}

template <typename R> inline void FoloEyesOpen(R r) {
    r(16, 21, 6, 1, 0x241C26); r(27, 21, 6, 1, 0x241C26); r(17, 22, 4, 2, 0xFFF8F6);
    r(28, 22, 4, 2, 0xFFF8F6); r(18, 22, 2, 2, 0x241C26); r(29, 22, 2, 2, 0x241C26);
    r(16, 20, 2, 1, 0x241C26); r(15, 19, 1, 1, 0x241C26); r(31, 20, 2, 1, 0x241C26);
    r(32, 19, 1, 1, 0x241C26); r(17, 24, 4, 1, 0xE8B49E); r(28, 24, 4, 1, 0xE8B49E);
}

template <typename R> inline void FoloEyesClosed(R r) {
    r(16, 22, 6, 1, 0x241C26); r(27, 22, 6, 1, 0x241C26); r(17, 23, 4, 1, 0x8A4560);
    r(28, 23, 4, 1, 0x8A4560);
}

template <typename R> inline void FoloEyesWide(R r) {
    r(16, 20, 6, 1, 0x241C26); r(27, 20, 6, 1, 0x241C26); r(17, 21, 4, 3, 0xFFF8F6);
    r(28, 21, 4, 3, 0xFFF8F6); r(18, 21, 2, 3, 0x241C26); r(29, 21, 2, 3, 0x241C26);
}

template <typename R> inline void FoloEyesSquint(R r) {
    r(16, 22, 6, 1, 0x241C26); r(27, 22, 6, 1, 0x241C26); r(17, 23, 4, 1, 0xFFF8F6);
    r(28, 23, 4, 1, 0xFFF8F6); r(19, 23, 1, 1, 0x241C26); r(30, 23, 1, 1, 0x241C26);
}

template <typename R> inline void FoloEyesSad(R r) {
    r(16, 21, 6, 1, 0x241C26); r(27, 21, 6, 1, 0x241C26); r(17, 22, 4, 2, 0xFFF8F6);
    r(28, 22, 4, 2, 0xFFF8F6); r(18, 23, 2, 1, 0x241C26); r(29, 23, 2, 1, 0x241C26);
    r(15, 22, 2, 1, 0x241C26); r(32, 22, 2, 1, 0x241C26);
}

template <typename R> inline void FoloMouthNeutral(R r) {
    r(21, 28, 7, 1, 0xC03050); r(22, 29, 5, 1, 0xD84060); r(24, 29, 1, 1, 0xFFF8F6);
}

template <typename R> inline void FoloMouthOpen(R r) {
    r(21, 28, 7, 2, 0xC03050); r(22, 29, 5, 2, 0x5A1428); r(22, 30, 5, 1, 0xD84060);
}

template <typename R> inline void FoloMouthSmile(R r) {
    r(21, 28, 7, 1, 0xC03050); r(22, 29, 5, 1, 0xD84060); r(23, 28, 3, 1, 0xFFF8F6);
}

template <typename R> inline void FoloMouthSad(R r) {
    r(22, 29, 5, 1, 0xC03050); r(21, 28, 1, 1, 0xC03050); r(29, 28, 1, 1, 0xC03050);
}

template <typename Rect>
void DrawPixelPortrait(Rect rect, PortraitState state, unsigned frame) {
    auto r = [&](int x, int y, int w, int h, uint32_t c) {
        rect(x, y, w, h, c);
    };
    constexpr uint32_t hair_dark = 0x8A4560, hair = 0xC86E8F, hair_light = 0xE894AD, skin = 0xFFD9C8, skin_shade = 0xE8B49E, blush = 0xF08FA5, lip = 0xC03050, lip_light = 0xD84060, cloth = 0x7A1E35, cloth_seam = 0x5A1428, choker = 0x1A1A22, ink = 0x241C26, white = 0xFFF8F6, tear = 0x8FC8E8;
    FoloBase(r);
    switch (state) {
        case PortraitState::Idle: {
            if (frame % 16 == 15) FoloEyesClosed(r);
            else FoloEyesOpen(r);
            FoloMouthNeutral(r);
        if (frame % 8 < 4) { r(4, 12, 2, 2, lip); r(6, 12, 2, 2, lip);
            r(5, 14, 3, 1, lip); }
            break;
        }
        case PortraitState::Listening: {
            FoloEyesSquint(r);
            FoloMouthNeutral(r);
        for (int i = 0; i < 3; ++i) {
            int h = 2 + ((frame + i) % 3) * 2;
            r(i * 2, 23 - h / 2, 1, h, hair_light);
            r(45 - i * 2, 23 - h / 2, 1, h, hair_light);
        }
            break;
        }
        case PortraitState::Thinking: {
            FoloEyesSquint(r);
            FoloMouthNeutral(r);
        r(25, 30, 4, 7, skin_shade); r(24, 29, 2, 3, skin);
        r(26, 34, 4, 7, skin_shade); r(28, 35, 2, 2, skin_shade);
        for (int i = 0; i < 3; ++i)
            r(36 + i * 4, 5, 2, 2, i <= int(frame % 3) ? lip : cloth_seam);
            break;
        }
        case PortraitState::Speaking: {
            if (frame % 16 == 15) FoloEyesClosed(r);
            else FoloEyesOpen(r);
            if (frame % 2 == 0) FoloMouthOpen(r);
            else FoloMouthNeutral(r);
        r(37, 32, 4, 9, skin_shade); r(38, 29, 5, 7, skin);
        r(37, 27, 1, 5, skin); r(39, 25, 1, 5, skin); r(41, 25, 1, 5, skin);
        r(43, 27, 1, 6, skin); r(35, 31, 3, 2, skin);
            break;
        }
        case PortraitState::Sad: {
            FoloEyesSad(r);
            FoloMouthSad(r);
        r(25, 25, 1, 3, tear); r(33, 26, 1, 2, tear);
            break;
        }
        case PortraitState::Sleepy: {
            FoloEyesClosed(r);
            FoloMouthNeutral(r);
        { unsigned s = frame % 3;
          r(37, 6 + s, 4, 1, white); r(39, 8 + s, 2, 1, white);
          r(37, 10 + s, 4, 1, white); r(35, 13 + s, 3, 1, white);
          r(39, 13 + s, 2, 1, white); }
            break;
        }
        case PortraitState::Wake: {
            FoloEyesWide(r);
            FoloMouthSmile(r);
        r(4, 12, 2, 2, lip); r(7, 12, 2, 2, lip); r(4, 14, 5, 2, lip);
        r(41, 14, 2, 2, lip); r(44, 12, 2, 2, lip);
            break;
        }
        default: FoloEyesOpen(r); FoloMouthNeutral(r); break;
    }
}   
