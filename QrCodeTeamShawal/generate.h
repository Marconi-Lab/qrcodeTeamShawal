//initialise header file
#ifndef GENERATE_H
#define GENERATE_H

//include header files
//#include "app_options.hpp"

#include "qrcode_gen.hpp"
#include "png_gen.hpp"
#include "qrcode.h"

#include <string>
#include <iostream>

bool app_run(int argc, char *argv[])
{
    //AppOptions options(argc, argv);
    std::string qr_string = "Shawal Mbalire";
    //if (options)
    {
        // Process the input arguments
        QRcodeGen gen(options.getVersion().second, options.getEccType().second);
        gen.init(8);

        PngGen png;
        png.setFileName("qr_code.png");

        // Generate QR code
        bool res = gen.generate(qr_string);
        if (!res)
        {
            std::cout << "Failed to generate qrcode\n";
            return false;
        }

        // Getr the QR code image and convert it to PNG
        res = png.compressPng(gen.getImage());
        if (!res)
        {
            std::cout << "Failed to generate png\n";
            return false;
        }
    }

    return true;
}

//end of header file
#endif


