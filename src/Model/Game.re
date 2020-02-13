type t = {
  deck: Deck.t,
  hand: list(Card.t),
};

let deal = game => {
  switch (Deck.deal(1, game.deck)) {
  | (Some(dealtCards), Some(remainingDeck)) => {
      deck: remainingDeck,
      hand: List.append(game.hand, dealtCards),
    }
  | _ => game
  };
};