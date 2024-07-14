#include "person.h"

int main()
{
    programmer* bella = create_programmer(
        "Bella",
        STR_LIST
        (
            "She",
            "Her",
            "They",
            "Them"
        ),
        18,
        STR_LIST
        (
            "C"
        ),
        create_software_preferences(
            "Gentoo Linux",
            "Awesome",
            "Firefox",
            "VSCodium"
        )
    );

    print_programmer(bella);

    destroy_programmer(bella);
}
