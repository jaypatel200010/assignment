import React, { useState } from "react";
import ReactDOM from "react-dom/client";
// Functional component for an increment/decrement counter
export default function Inc_dec() {
  // State variable 'count' and its updater function 'setCount'
  const [count, setCount] = useState(0);

  return (
    <>
      {/* Display the current count */}
      <p>Count: {count}</p>
      {/* Button to increment the count */}
      <button type="button" id="inc" onClick={() => setCount((c) => c + 1)}>
        inc
      </button>
      {/* Button to reset the count to 0 */}
      <button type="button" id="reset" onClick={() => setCount((c) => c - c)}>
        reset
      </button>
      {/* Button to decrement the count */}
      <button type="button" id="dec" onClick={() => setCount((c) => c - 1)}>
        dec
      </button>
    </>
  );
}
// Create a React root and render the component to the specified HTML element
const root = ReactDOM.createRoot(document.getElementById("root"));
root.render(<Inc_dec />);
