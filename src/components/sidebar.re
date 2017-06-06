open Element;

module Sidebar = {
  include ReactRe.Component;
  type props = unit;
  let name = "Sidebar";
  let render _ => <div> (ste "SIdebar") </div>;
};

include ReactRe.CreateComponent Sidebar;

let createElement = wrapProps ();
