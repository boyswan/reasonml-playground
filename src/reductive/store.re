type route = Home | Body | Page;
type appState = {route: route, count: int};
let init = {route: Home, count: 0};

type action =
  | Increment
  | Decrement
  | Route route;

let push route => {
  let path = switch route {
    | Home => "/#/home"
    | Body => "/#/body"
    | Page => "/#/page"
    | _ => ""
  };
  History.push path;
  None
};


let counter state action =>
  switch action {
  | Increment => {...state, count: state.count + 1}
  | Decrement => {...state, count: state.count - 1}
  | Route route => {
      push route;
      {...state, route}
    };
  };


let store = Reductive.Store.create reducer::counter preloadedState::init ();
