open Jest;
open Expect;

describe("Hand.score", () => {
  test("calculates the score of a Hand", () => {
    let hand: list(Card.t) = [
      {suit: Heart, name: Number(3)},
      {suit: Cross, name: Number(7)},
      {suit: Cross, name: Queen},
    ];

    expect(Hand.score(hand)) |> toEqual(20);
  })
});