struct songNode **createLibrary();

struct songNode **addSong(struct songNode *library[27],
                         char paramArtist[100],
                         char paramName[100]);

struct songNode *findSongLibrary(struct songNode **library,
                           char paramArtist[100],
                           char paramName[100]);

struct songNode *findArtistLibrary(struct songNode** library,
                           char paramArtist[100]);

void printByLetter(struct songNode **library, char letter);

void printByArtist(struct songNode **library, char paramArtist[100]);

void printLibrary(struct songNode **library);

void shuffle(struct songNode **library, int n);

struct songNode **removeSongLibrary(struct songNode** library,
                           char paramArtist[100],
                           char paramName[100]);

struct songNode **clearLibrary(struct songNode **library);
