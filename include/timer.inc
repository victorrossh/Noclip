forward timer_player_started(id);
forward timer_player_finished(id);
forward timer_player_record(id);
forward timer_player_category_changed(id);
forward timer_player_rank_changed(id, rank);
forward timer_db_loaded();

native get_bool_timer(id);
native toggle_timer(id);

native open_top_menu(id);
native open_cat_menu(id);

native set_user_finished(id, value);
native get_user_finished(id);

native get_user_best(id);
// returns category id
// sets name as category name
native get_user_category(id, name[], len);

native get_user_rule_bhop(id);
native get_user_rule_speedrun(id);
native get_user_rule_hook(id);

/*
    // get_categories_enabled(data[], len)
    writes into data all categories enabled separated by a comma(,)
*/
native Array:get_categories_array();
native get_categories_enabled(data[], len);
native get_category_name(id, name[], len);

native get_entity_start();
native get_entity_finish();

// Resets the player's timer. Used in the checkpoint system so that when the player uses a checkpoint, the timer is reset.
native bool:is_timer_active(id);
native reset_player_timer(id);