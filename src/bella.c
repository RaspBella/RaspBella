#include "user.h"

User RaspBella = {
  .name = "Bella",
  .age = 20,
  .pronouns = str_list(
    "she",
    "her"
  ),
  .hobbies = hobby_list(
    hobby(
      .name = "Speedcubing",
      .link = "/cubing"
    ),
    hobby(
      .name = "Programming",
      .link = "https://github.com/RaspBella"
    ),
    hobby(
      .name = "Gaming",
      .link = "/game"
    )
  ),
  .fave_langs = str_list(
    "c",
    "python"
  ),
  .hardware = {
    .cpu = "Ryzen 5 5600G",
    .ram = {
      .gb = 32,
      .ddr = 4,
      .mhz = 3200
    },
    .drives = drive_list(
      drive(
        .name = "Kingston NV2",
        .gb = 1000
      ),
      drive(
        .name = "Seagate Firecuda 510",
        .gb = 500
      )
    ),
    .monitors = monitor_list(
      monitor(
        .name = "Main monitor",
        .pixels = pixels(
          .width = 1920,
          .height = 1080
        ),
        .hz = 144
      ),
      monitor(
        .name = "Tall monitor (to the left of Main)",
        .pixels = pixels(
          .width = 1080,
          .height = 1920
        ),
        .hz = 60
      )
    )
  },
  .software = {
    .OS = "Gentoo Linux",
    .WM = "Hyprland",
    .browser = "Firefox",
    .search_engine = "Ecosia",
    .terminal = "kitty & tmux",
    .editor = "Neovim"
  }
};
