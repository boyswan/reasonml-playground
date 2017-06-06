

module App = {
  include ReactRe.Component;
  let name = "App";
  type props = {
    state: Store.appState,
    dispatch: Store.action => unit
  };

  /* let getRoute route count => {
    Js.log route;
    let dog = switch route {
    | Home => <div> (Element.ste "Home") </div>
    | Page => <div> (Element.ste "Page") </div>
    };

    /* dog; */
    <div> (Element.ste "dog") </div>;
  }; */


  let render {props: { state: { route, count }, dispatch }} =>
    <div className="app">
      <Navigation route dispatch/>
      <hr/>
      /* (getRoute route count) */
      /* <div className="count">
        (ReactRe.stringToElement (string_of_int count))
      </div>
        (ReactRe.stringToElement "lol")
      <button onClick=(fun _ => dispatch Store.Increment)>
        (ReactRe.stringToElement "Increment")
      </button>
      <button onClick=(fun _ => dispatch Store.Decrement)>
        (ReactRe.stringToElement "Decrement")
      </button> */
    </div>;
};

include ReactRe.CreateComponent App;

let createElement ::state ::dispatch => wrapProps {state, dispatch};
