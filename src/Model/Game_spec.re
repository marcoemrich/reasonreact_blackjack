open Jest;
open Expect;

let exampleDeck: list(Card.t) = [
  {suit: Heart, name: Number(3)},
  {suit: Cross, name: Number(7)},
  {suit: Cross, name: Queen},
];

let exampleGame: Game.t = {
  deck: exampleDeck,
  hand: [{suit: Heart, name: Number(5)}],
};

describe("Game", () => {
  test("Game.deal moves a card from deck to hand", () => {
    expect(Game.deal(exampleGame))
    |> toEqual(
         {
           deck: [
             {suit: Cross, name: Number(7)},
             {suit: Cross, name: Queen},
           ],
           hand: [
             {suit: Heart, name: Number(5)},
             {suit: Heart, name: Number(3)},
           ],
         }: Game.t,
       )
  })
});