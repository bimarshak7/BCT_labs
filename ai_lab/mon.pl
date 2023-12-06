clauses:
    in_room(bananas).
    in_room(chair).
    in_room(monkey).
    clever(monkey).
    can_climb(monkey,chair).
    tall(chair).
    can_move(monkey,chair,bananas).

can_reach(X,Y):-
    clever(X),clos(X,Y).

get_on(X,Y):-
    can_climb(X,Y).

under(X,Y,Z):-
    in_room(X),in_room(Y),in_room(Z),can_move(X,Y,Z).

clos(X,Z):-
    get_on(X,Y),
    under(X,Y,Z),
    tall(Y).
