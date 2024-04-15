#define NS_PRIVATE_IMPLEMENTATION
#define CA_PRIVATE_IMPLEMENTATION
#define MTL_PRIVATE_IMPLEMENTATION
#include <Foundation/Foundation.hpp>
#include <Metal/Metal.hpp>
#include <QuartzCore/QuartzCore.hpp>

#include <iostream>

int main() {
    NS::SharedPtr<MTL::Device> pDevice = NS::TransferPtr(MTL::CreateSystemDefaultDevice());
    
}
