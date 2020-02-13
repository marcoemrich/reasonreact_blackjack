let startState: Game.t = {
  deck: [
    {name: Number(3), suit: Heart},
    {name: Number(4), suit: Cross},
    {name: Queen, suit: Diamonds},
    {name: Number(10), suit: Spade},
    {name: King, suit: Diamonds},
  ],
  hand: [{name: Jack, suit: Heart}, {name: Number(2), suit: Cross}],
};

[@react.component]
let make = () => {
  <div> {React.string("Hello BlackJack")} </div>;
};