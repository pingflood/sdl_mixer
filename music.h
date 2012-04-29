/* Declarations of externally usable music.c routines.
 */
#ifndef MUSIC_H
#define MUSIC_H

int open_music(SDL_AudioSpec *mixer);
void close_music(void);
void music_mixer(void *udata, Mix_Music * music_playing, Uint8 *stream, int len, int channel);

#endif
