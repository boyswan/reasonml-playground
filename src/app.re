open Element;

module App = {
  include ReactRe.Component;
  type props = {title: string};
  let name = "App";
  let handleClick _ _ => {
    Js.log "clicked!";
    None
  };
  let testElement = <div> (toStr "testElement") </div>;

  let render { props, updater } =>
    <div className="App">
      (el Title "I'm a h1")
      (el Text "I'm a span")
    </div>;
};

include ReactRe.CreateComponent App;

let createElement ::title => wrapProps {title: title};
