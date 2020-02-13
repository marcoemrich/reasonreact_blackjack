open Jest;
open Expect;

let exampleDeck: list(Card.t) = [
  {suit: Heart, name: Number(3)},
  {suit: Cross, name: Number(7)},
  {suit: Cross, name: Queen},
];

describe("Deck", () => {
  test("Deck.deal returns a hand of number of cards", () => {
    let hand: list(Card.t) = [
      {suit: Heart, name: Number(3)},
      {suit: Cross, name: Number(7)},
    ];

    let remainingDeck: list(Card.t) = [{suit: Cross, name: Queen}];

    expect(Deck.deal(2, exampleDeck))
    |> toEqual((Some(hand), Some(remainingDeck)));
  })
});