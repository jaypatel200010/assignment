import React from "react";

export default function Slider() {
  return (
    <>
      <div>
        {/* Carousel */}
        <div id="demo" className="carousel slide p-4" data-bs-ride="carousel">
          {/* Indicators/dots */}
          <div className="carousel-indicators">
            <button
              type="button"
              data-bs-target="#demo"
              data-bs-slide-to={0}
              className="active"
            />
            <button type="button" data-bs-target="#demo" data-bs-slide-to={1} />
          </div>
          {/* The slideshow/carousel */}
          <div className="carousel-inner">
            <div className="carousel-item active">
              <img
                src="s2.png"
                alt="Los Angeles"
                className="d-block"
                id="slideri1"
              />
              <div class="carousel-caption mb-5">
                <h2>
                  Don't miss amazing <br /> grocery deals{" "}
                </h2>
                <h6 className="mainh2">Sign up for the daily newsletter</h6>
                <form class="input-group email">
                  <img
                    src="https://nest-frontend.netlify.app/assets/imgs/theme/icons/icon-plane.png"
                    class="sendemail"
                    alt=""
                  />

                  <input
                    type="text"
                    class="form-control emailinput"
                    placeholder="Your email address"
                    aria-label="Search Items"
                    aria-describedby="button-addon2"
                  />

                  <div class="input-group-prepend">
                    <button
                      class="btn btnsubs "
                      type="button"
                      aria-haspopup="true"
                      aria-expanded="false"
                    >
                      Subscribe <i class="fas fa-caret-down"></i>
                    </button>
                  </div>
                </form>
              </div>
            </div>
            <div className="carousel-item">
              <img
                src="s1.png"
                alt="Chicago"
                className="d-block"
                id="slideri1"
              />
              <div class="carousel-caption mb-5">
                <h2>
                  Don't miss amazing <br /> grocery deals{" "}
                </h2>
                <h6 className="mainh2">Sign up for the daily newsletter</h6>
                <form class="input-group email">
                  <img
                    src="https://nest-frontend.netlify.app/assets/imgs/theme/icons/icon-plane.png"
                    class="sendemail"
                    alt=""
                  />

                  <input
                    type="text"
                    class="form-control emailinput"
                    placeholder="Your email address"
                    aria-label="Search Items"
                    aria-describedby="button-addon2"
                  />

                  <div class="input-group-prepend">
                    <button
                      class="btn btnsubs "
                      type="button"
                      aria-haspopup="true"
                      aria-expanded="false"
                    >
                      Subscribe <i class="fas fa-caret-down"></i>
                    </button>
                  </div>
                </form>
              </div>
            </div>
          </div>
          {/* Left and right controls/icons */}
          <button
            className="carousel-control-prev"
            type="button"
            data-bs-target="#demo"
            data-bs-slide="prev"
          >
            <span className="carousel-control-prev-icon" />
          </button>
          <button
            className="carousel-control-next"
            type="button"
            data-bs-target="#demo"
            data-bs-slide="next"
          >
            <span className="carousel-control-next-icon" />
          </button>
        </div>
      </div>
    </>
  );
}
