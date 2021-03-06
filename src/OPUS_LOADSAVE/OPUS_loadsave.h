
#ifndef PI_PROJECTSDL2_PART_LIB_OPUS_LOADSAVE_H
#define PI_PROJECTSDL2_PART_LIB_OPUS_LOADSAVE_H

#include "../mlib.h"
#include "../STRUCTS/Opus.h"

int fscanf_note(FILE *opus_text_file, Note *n);
Chord *fscanf_chord(FILE *opus_text_file);
Bar *fscanf_bar(FILE *opus_text_file);
Opus *fscanf_opus(const char *path);


int fprint_note(FILE *opus_text_file, Note *n);
int fprint_chord(FILE *opus_text_file, Chord *chord_to_print);
int fprint_bar(FILE *opus_text_file, Bar *bar_to_print);
int save_Opus_as_TextFile(Opus *OPUS_to_save);

/*
    opus_text_file:

    title:author:key:serial_key:metre:temp:
    {X_of_start_bar:width_:brace:
        [time:_time_dots_:ssp_articulation:notes_number:X_positon:local_serial_key:
            (name:acci:height)(...)...(...)
        ][...
        ]...[...
        ]
        | // pipe, left hand above, right hand beneath
        [...
        ]...[...
        ]
    }{...
    }...{...
    }EOF

*/

#endif //PI_PROJECTSDL2_PART_LIB_OPUS_LOADSAVE_H
