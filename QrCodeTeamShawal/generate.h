//initialise header file
#ifndef GENERATE_H
#define GENERATE_H

//include header files
#include "..\zxing-cpp\core\src\MultiFormatWriter.h"
/*****************************************************************************************************************
 * To write barcodes:
 * As an example, have a look at [`ZXingWriter.cpp`](example/ZXingWriter.cpp).
 * 1. Create a [`MultiFormatWriter`](core/src/MultiFormatWriter.h) instance with the format you want to generate.
 *      Set encoding and margins if needed.
 * 2. Call `encode()` with text content and the image size. This returns a [`BitMatrix`](core/src/BitMatrix.h)
 *      which is a binary image of the barcode where `true` == visual black and `false` == visual white.
 * 3. Convert the bit matrix to your native image format. See also the `ToMatrix<T>(BitMatrix&)` helper function.
*******************************************************************************************************************/

//end of header file
#endif


