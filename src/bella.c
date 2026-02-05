#include "user.h"

struct user RaspBella = {
  .name = "Bella",
  .age = 20,
  .pronouns = (char*[]){
    "she",
    "her",
    NULL
  },
  .hobbies = (struct hobby[]){
    {
      .name = "Speedcubing",
      .link = "/cubing"
    },
    {
      .name = "Programming",
      .link = "https://github.com/RaspBella"
    },
    {
      .name = "Gaming",
      .link = "/game"
    },
    NULL
  },
  .fave_langs = (char*[]){
    "c",
    "rust",
    NULL
  },
  .hardware = {
    .cpu = "Ryzen 5 5600G",
    .igpu = true,
    .gpu = "AMD Radeon RX 7600",
    .ram = {
      .gb = 32,
      .ddr = 4,
      .mhz = 3200
    },
    .drives = (struct drive[]){
      {
        .name = "Kingston NV2",
        .gb = 1000
      },
      {
        .name = "Seagate Firecuda 510",
        .gb = 500
      },
      NULL
    },
    .monitors = (struct monitor[]){
      {
        .name = "Main monitor",
        .pixels = {
          .width = 1920,
          .height = 1080
        },
        .hz = 144
      },
      {
        .name = "Tall monitor (to the left of Main)",
        .pixels = {
          .width = 1080,
          .height = 1920
        },
        .hz = 60
      },
      NULL
    }
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
