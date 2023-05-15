//
//  generate.h
//  StarCoderApp
//
//  Created by Pedro Cuenca on 15/5/23.
//

#ifndef generator_h
#define generator_h

#ifdef __cplusplus
extern "C" {
#endif

// Opaque type defined in generate.cpp
typedef struct _model_context StarcoderModel;

extern const StarcoderModel * load_model(const char * model_path);
extern const float generate(const StarcoderModel * starcoder, const char * prompt, void (*token_callback)(const char * token));

#ifdef __cplusplus
}
#endif

#endif /* generator_h */
