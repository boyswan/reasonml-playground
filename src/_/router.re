let getRoute route =>
  switch route {
  | Home => <div> (Element.ste "Home") </div>
  | Page => <div> (Element.ste "Page") </div>
  };

module Router = {
  include ReactRe.Component;
  type props = {route};
  let name = "Router";
  let render {props, updater} => <div> <Navigation /> <div> (getRoute props.route) </div> </div>;
};

include ReactRe.CreateComponent Router;

let createElement ::route => wrapProps {route: route};
