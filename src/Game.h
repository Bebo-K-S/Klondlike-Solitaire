#include <SFML/Audio.hpp>
#include "OutlinePile.h"

class Game
{
public:
    RectangleShape menu_box, resume, quit, new_game, score_board, start_button, blurred_page;
    Texture background_texture, tryerz_texture;
    Sprite background, tryerz_image;
    Font font;
    Text timer, start, start_message, made_by, you_won, menu_text, resume_text, new_game_text, quit_text;
    Clock clock;
    Time time_elapsed1, time_elapsed2;
    SoundBuffer window_start_buffer, music_start_buffer;
    Sound window_start, music_start;
    OutlinePile* outline_piles;

    Game();

    void setMainMenuText();
    void setMainMenuMusic();
    void setMainMenuButton();
    void setBackground();
    void setTimer();
    Text drawTimer();
    void setMenu();
    void setMenuText();
    void setOutlinePiles();
    void drawOutlinePiles(RenderWindow&);
    void setScoreboard();
    void setEndMenu();
    void setFont();
};
