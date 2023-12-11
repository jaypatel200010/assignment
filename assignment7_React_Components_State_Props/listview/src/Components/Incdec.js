import React from "react";

export default function Incdec() {
  function plus() {
    var value = document.getElementById("test");
    value++;
    document.getElementById("test").innerHTML = value;
  }
  function minus() {
    var value = document.getElementById("test");
    value--;
    document.getElementById("test").innerHTML = value;
  }
  return (
    <>
      <div>
        <input type="submit" name="" id="" value="+" onclick={plus()} />
        <span id="test">1</span>
        <input type="submit" name="" id="" value="-" onclick={minus()} />
      </div>
    </>
  );
}
