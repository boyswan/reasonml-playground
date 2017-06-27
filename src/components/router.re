let getRoute route =>
  switch route {
  | Some x => <div> x </div>
  | None => <div> (Element.ste "ashf") </div>
  };

/* switch route {
   | Home => <div> (Element.ste "Home") </div>
   | Page => <div> (Element.ste "Page") </div>
   }; */
let onClick dispatch action _ => dispatch action;

module Router = {
  include ReactRe.Component;
  type props = {route: Store.route, dispatch: Store.action => unit};
  let name = "Router";
  let render {props: {route, dispatch}} => <div> (getRoute route) </div>;
};

include ReactRe.CreateComponent Router;

let createElement ::route ::dispatch => wrapProps {route, dispatch};
