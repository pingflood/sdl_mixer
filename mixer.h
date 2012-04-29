/* Declarations of externally usable mixer.c routines.
 */
#ifndef MIXER_H
#define MIXER_H

SDL_bool _MusicIsPlaying(Mix_Music * song);
void *Mix_DoEffects(int chan, void *snd, int len);
void _WaitForChannelFade(int channel);
Mix_Music* _ChannelPlayingMusic(int channel);
int get_available_channel(void);
void _HaltAllMusic(void);
void _StartMusic(int channel, int is_fading, Mix_Music* music);
void _ClearMusic(Mix_Music * song);

#endif
