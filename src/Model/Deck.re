open Belt;

type t = list(Card.t);

let deal = (numberOfCardsToDeal, deck: t) => (
  List.take(deck, numberOfCardsToDeal),
  List.drop(deck, numberOfCardsToDeal),
);