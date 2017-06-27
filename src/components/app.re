module App = {
  include ReactRe.Component;
  let name = "App";
  type props = {state: Store.appState, dispatch: Store.action => unit};
  let render {props: {state: {route}, dispatch}} =>
    <div className="app">
      <Navigation route dispatch />
      <hr />
      <hr />
      <Router route dispatch />
    </div>;
};

include ReactRe.CreateComponent App;

let createElement ::state ::dispatch => wrapProps {state, dispatch};
