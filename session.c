#include "session.h"

void restart_session_game_state(Session *session)
{
    init_game_state(&session->current_game_state);
}

void init_session(Session *session){
    restart_session_game_state(&session);
    session->current_game_state.score = 0;
    
}

