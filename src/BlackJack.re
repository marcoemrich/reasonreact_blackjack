module CCard = Components_Card;

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
  let (game, setGame) = React.useState(() => startState);

  let onClick = _e => setGame(Game.deal);

  <div>
    <div>
      {React.string(
         "Cards in Deck: " ++ string_of_int(game.deck |> List.length),
       )}
    </div>
    <br />
    <div>
      {"Score: " ++ (game.hand |> Hand.score |> string_of_int) |> React.string}
    </div>
    <br />
    <div className="hand">
      {game.hand
       |> List.map(card => <CCard card />)
       |> Array.of_list
       |> ReasonReact.array}
    </div>
    <br />
    <button onClick> {React.string("deal 1")} </button>
  </div>;
};