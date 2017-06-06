let onClick dispatch action => fun _ => dispatch action;

module Navigation = {
  include ReactRe.Component;
  type props = {
    route: Store.route,
    dispatch: Store.action => unit
  };
  let name = "Navigation";
  let render {props: { route, dispatch }} =>
    <div>
      (Element.ste "Header")
      <ul>
        <li onClick=(onClick dispatch (Store.Route Home))> (Element.ste "Home") </li>
        <li onClick=(onClick dispatch (Store.Route Page))> (Element.ste "Page") </li>
        <li onClick=(onClick dispatch (Store.Route Body))> (Element.ste "Body") </li>
      </ul>
    </div>;
};

include ReactRe.CreateComponent Navigation;

let createElement ::route ::dispatch => wrapProps {route, dispatch};
