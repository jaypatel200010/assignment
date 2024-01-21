import React from "react";

export default function Header() {
  return (
    <>
      <div>
        <nav className="navbar navbar-expand-lg navbar-light">
          <div id="n1" className="container-fluid">
            {/* <a class="navbar-brand" href="#">Logo</a> */}
            <button
              className="navbar-toggler"
              type="button"
              data-bs-toggle="collapse"
              data-bs-target="#navbarNav"
              aria-controls="navbarNav"
              aria-expanded="false"
              aria-label="Toggle navigation"
            >
              <span className="navbar-toggler-icon" />
            </button>
            <div className="collapse navbar-collapse" id="navbarNav">
              <ul className="navbar-nav me-auto mb-2 mb-lg-0">
                <li className="nav-item">
                  <a className="nav-link active" aria-current="page" href="#">
                    About Us
                  </a>
                </li>
                <li className="nav-item">
                  <a className="nav-link" href="#">
                    My Account
                  </a>
                </li>
                <li className="nav-item">
                  <a className="nav-link" href="#">
                    Wishlist
                  </a>
                </li>
                <li className="nav-item">
                  <a className="nav-link" href="#">
                    Order Tracking
                  </a>
                </li>
              </ul>
              {/* Promotional Text */}
              <span className="text-success">
                Get great devices up to 50% off! View details
              </span>
              {/* Right Side Items */}
              <ul className="navbar-nav ms-auto">
                {/* Contact Information */}
                <li className="nav-item">
                  <a className="nav-link" href="#">
                    Need help? Call us: 1800-100
                  </a>
                </li>
                {/* Language Selection */}
                <li className="nav-item dropdown">
                  <a
                    className="nav-link dropdown-toggle"
                    href="#"
                    id="navbarDropdown"
                    role="button"
                    data-bs-toggle="dropdown"
                    aria-expanded="false"
                  >
                    English
                  </a>
                  <ul
                    className="dropdown-menu"
                    aria-labelledby="navbarDropdown"
                  >
                    <li>
                      <a className="dropdown-item" href="#">
                        Hindi
                      </a>
                    </li>
                    <li>
                      <a className="dropdown-item" href="#">
                        Gujarati
                      </a>
                    </li>
                    <li>
                      <a className="dropdown-item" href="#">
                        Other
                      </a>
                    </li>
                  </ul>
                </li>
                {/* Currency Selection */}
                <li className="nav-item dropdown">
                  <a
                    className="nav-link dropdown-toggle"
                    href="#"
                    id="navbarDropdown"
                    role="button"
                    data-bs-toggle="dropdown"
                    aria-expanded="false"
                  >
                    USD
                  </a>
                  <ul
                    className="dropdown-menu"
                    aria-labelledby="navbarDropdown"
                  >
                    <li>
                      <a className="dropdown-item" href="#">
                        INR
                      </a>
                    </li>
                    <li>
                      <a className="dropdown-item" href="#">
                        EUR
                      </a>
                    </li>
                    <li>
                      <a className="dropdown-item" href="#">
                        Other
                      </a>
                    </li>
                  </ul>
                </li>
              </ul>
            </div>
          </div>
        </nav>
        <nav id="n2" className="container-fluid navbar navbar-expand-lg">
          <a className="navbar-brand" href="#">
            <img src="logo.svg" width={90} height={90} alt />
          </a>
          <div className="collapse navbar-collapse" id="navbarNav">
            <form className="form-inline my-2 my-lg-0">
              <table>
                <tbody>
                  <tr>
                    <td>
                      <ul className="navbar-nav mr-auto">
                        <li className="nav-item dropdown">
                          <a
                            className="nav-link dropdown-toggle"
                            href="#"
                            id="navbarDropdownMenuLink"
                            role="button"
                            data-toggle="dropdown"
                            aria-haspopup="true"
                            aria-expanded="false"
                          >
                            All Categories
                          </a>
                          {/* Add dropdown items here */}
                        </li>
                      </ul>
                    </td>
                    <td>
                      <input
                        className="form-control mr-sm-2"
                        type="search"
                        placeholder="Search"
                        aria-label="Search"
                      />
                    </td>
                    <td>
                      <button
                        className="btn btn-outline-success my-2 my-sm-0"
                        type="submit"
                      >
                        Search
                      </button>
                    </td>
                  </tr>
                </tbody>
              </table>
            </form>
          </div>
          {/* Icons  */}
          <div className="navbar-nav ml-auto me-5 mb-0 mt-0">
            <a
              className="nav-link dropdown-toggle"
              href="#"
              id="navbarDropdownMenuLink"
              role="button"
              data-toggle="dropdown"
              aria-haspopup="true"
              aria-expanded="false"
            >
              <i className="fas fa-map-marker-alt" />
              Location
            </a>
            <a className="nav-item nav-link" href="#">
              <img
                src="https://nest-frontend.netlify.app/assets/imgs/theme/icons/icon-compare.svg"
                alt=""
              />
              <span class="badge bg-success">5</span>
              {/* <i className="fas fa-balance-scale" /> */}
              Compare
            </a>
            <a className="nav-item nav-link" href="#">
              <img
                src="https://nest-frontend.netlify.app/assets/imgs/theme/icons/icon-heart.svg"
                alt=""
              />
              <span class="badge bg-success">5</span>
              {/* <i className="fas fa-heart" /> */}
              Wishlist
            </a>
            <a className="nav-item nav-link" href="#">
              <img
                src="https://nest-frontend.netlify.app/assets/imgs/theme/icons/icon-cart.svg"
                alt=""
              />
              <span class="badge bg-success">5</span>
              {/* <i className="fas fa-shopping-cart" /> */}
              Cart
            </a>
            <a className="nav-item nav-link" href="#">
              <img
                src="https://nest-frontend.netlify.app/assets/imgs/theme/icons/icon-user.svg"
                alt=""
              />
              {/* <i className="fas fa-user" /> */}
              Account
            </a>
          </div>
        </nav>
        <div className="container-fluid" id="n3">
          <div className="row align-items-center">
            <div id="BAC" className="col-md-3">
              <button
                className="btn btn-success dropdown-toggle"
                type="button"
                id="dropdownMenuButton"
                data-toggle="dropdown"
                aria-haspopup="true"
                aria-expanded="false"
              >
                Browse All Categories
              </button>
              <div
                className="dropdown-menu"
                aria-labelledby="dropdownMenuButton"
              >
                {/* categories */}
                <a className="dropdown-item" href="#">
                  Category 1
                </a>
                <a className="dropdown-item" href="#">
                  Category 2
                </a>
              </div>
            </div>
            <div className="col-md-9 d-flex flex-wrap">
              {/* Add your menu items here */}
              <div className="i1">
                <a href="#" className="items">
                  Hot Deals
                </a>
              </div>
              <div className="i1">
                <a href="#" className="items">
                  Home
                </a>
              </div>
              <div className="i1">
                <a href="#" className="items">
                  About
                </a>
              </div>
              <div className="i1">
                <a href="#" className="items">
                  Shop
                </a>
              </div>
              <div className="i1">
                <a href="#" className="items">
                  Vendors
                </a>
              </div>
              <div className="i1">
                <a href="#" className="items">
                  Mego menu
                </a>
              </div>
              <div className="i1">
                <a href="#" className="items">
                  Blog
                </a>
              </div>
              <div className="i1">
                <a href="#" className="items">
                  Pages
                </a>
              </div>
              <div className="i1">
                <a href="#" className="items">
                  Content
                </a>
              </div>
              <div className="col" id="i1">
                <a href="#" className="items">
                  📞 1900 - 888 24/7 Support Center
                </a>
              </div>
            </div>
          </div>
        </div>
      </div>
    </>
  );
}
