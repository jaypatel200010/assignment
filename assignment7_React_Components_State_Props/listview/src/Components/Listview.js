import React from "react";
import ReactDOM from "react-dom/client";
function Car(props) {
  return <li>I am a {props.brand}</li>;
}
// created function through which list is rendered.
export default function List() {
  const cars = ["Ford", "BMW", "Audi"];
  return (
    <>
      <div>
        <h1>The React way to Render a list.</h1>
      </div>
      {/* passing value of cars to list car. */}
      <ul>
        {cars.map((car) => (
          <Car brand={car} />
        ))}
      </ul>
    </>
  );
}
const root = ReactDOM.createRoot(document.getElementById("root"));
// rendered a list
root.render(<List />);
