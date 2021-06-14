#ifndef MUZOWNIK_BAT_H
#define MUZOWNIK_BAT_H

#include "Chord.h"

struct BarsSpace{
    int widths_ni_[6][6];
}; typedef struct BarsSpace BarsSpace;


class Bar{
public:
    Chord *first_chord_treb{};
    Chord *first_chord_bass{};
    Bar *prev{};
    Bar *next{};
    int X_of_start_bar{};
    int width_{};
    BarsSpace b_space{};
    int brace{};

    Bar()=default;
    Bar(Bar *prev, Bar *next, int X_of_start_bar, int width, int brace, const char *treb_serial_key,
        const char *bass_serial_key);
    ~Bar();
};


#endif //MUZOWNIK_BAT_H