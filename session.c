#include "session.h"

void restart_session_game_state(GameState *gs)
{
    restart_game_state(gs);
}

void init_session(Session *session, GameState *gs){
    session->best_score = 0;
    init_game_state(gs);
}
