
// Main driver file
#include "ImageTransform.h"

int main(int argc, char **argv) {
    std::ios_base::sync_with_stdio(false);

    if (argc < 4) {
        std::cout << "Usage:\n"
                     "\t" << argv[0] << " <mode> <src_image_path> <dst_image_path> [mask_img_path]\n"
                                        "Where mode can be 'grayscale', 'spotlight', 'illinify' or 'watermark'\n";
        exit(-1);
    }

    std::string mode(argv[1]);
    std::string source_image_path(argv[2]);
    std::string dest_image_path(argv[3]);
    std::string mask_image_path; // [[maybe_unused]]

    if (argc > 4)
        mask_image_path = argv[4];


    uiuc::PNG src_img, dst_img, mask_img, result;

    src_img.readFromFile(source_image_path);
    if (mode == "grayscale") {
        result = grayscale(src_img);
        result.writeToFile(dest_image_path);
    } else if (mode == "spotlight") {
        result = createSpotlight(src_img, 450, 150);
        result.writeToFile(dest_image_path);
    } else if (mode == "illinify") {
        result = illinify(src_img);
        result.writeToFile(dest_image_path);
    } else if (mode == "watermark") {
        if (mask_image_path.empty()) {
            std::cout << "Usage in 'watermark' mode requires [mask_img] path.\n\n"
                         "\t" << argv[0] << " watermark <src_image_path> <dst_image_path> <mask_img_path>\n";
            exit(-1);
        }

        mask_img.readFromFile(mask_image_path);
        result = watermark(src_img, mask_img);
        result.writeToFile(dest_image_path);
    } else {
        std::cout << "Invalid mode '" << mode << "' specified. Valid modes are 'grayscale', 'spotlight', "
                                                 "'illinify' or 'watermark'.\n";
        exit(-1);
    }

    std::cout << "[INFO] " << mode << "'d image successfully written to " << dest_image_path << "\n";

    return 0;
}
