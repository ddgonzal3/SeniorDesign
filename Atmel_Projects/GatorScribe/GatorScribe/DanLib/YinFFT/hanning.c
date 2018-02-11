//
//  hanning.c
//  
//
//  Created by Daniel Gonzalez on 1/20/18.
//
#include "asf.h"
COMPILER_ALIGNED(1024) const float hanning[1024] = 
{
	0,
	9.4307688e-06,
	3.7722722e-05,
	8.4874788e-05,
	0.00015088519,
	0.00023575145,
	0.00033947034,
	0.00046203795,
	0.00060344971,
	0.00076370023,
	0.00094278343,
	0.0011406926,
	0.0013574203,
	0.0015929585,
	0.0018472979,
	0.0021204292,
	0.0024123422,
	0.0027230256,
	0.0030524679,
	0.0034006566,
	0.0037675784,
	0.0041532195,
	0.0045575658,
	0.0049806018,
	0.0054223114,
	0.0058826776,
	0.0063616838,
	0.0068593114,
	0.0073755416,
	0.0079103550,
	0.0084637320,
	0.0090356516,
	0.0096260915,
	0.010235029,
	0.010862443,
	0.011508308,
	0.012172601,
	0.012855296,
	0.013556369,
	0.014275790,
	0.015013536,
	0.015769575,
	0.016543882,
	0.017336426,
	0.018147178,
	0.018976107,
	0.019823181,
	0.020688370,
	0.021571638,
	0.022472955,
	0.023392286,
	0.024329597,
	0.025284851,
	0.026258012,
	0.027249044,
	0.028257910,
	0.029284572,
	0.030328991,
	0.031391125,
	0.032470942,
	0.033568390,
	0.034683436,
	0.035816032,
	0.036966141,
	0.038133718,
	0.039318718,
	0.040521093,
	0.041740805,
	0.042977802,
	0.044232041,
	0.045503467,
	0.046792045,
	0.048097715,
	0.049420435,
	0.050760150,
	0.052116815,
	0.053490374,
	0.054880776,
	0.056287967,
	0.057711899,
	0.059152514,
	0.060609762,
	0.062083583,
	0.063573927,
	0.065080725,
	0.066603936,
	0.068143502,
	0.069699347,
	0.071271434,
	0.072859690,
	0.074464060,
	0.076084480,
	0.077720888,
	0.079373233,
	0.081041440,
	0.082725458,
	0.084425211,
	0.086140648,
	0.087871686,
	0.089618281,
	0.091380350,
	0.093157835,
	0.094950669,
	0.096758783,
	0.098582111,
	0.10042057,
	0.10227411,
	0.10414266,
	0.10602614,
	0.10792448,
	0.10983761,
	0.11176545,
	0.11370794,
	0.11566501,
	0.11763657,
	0.11962256,
	0.12162290,
	0.12363750,
	0.12566631,
	0.12770924,
	0.12976621,
	0.13183714,
	0.13392198,
	0.13602062,
	0.13813297,
	0.14025900,
	0.14239858,
	0.14455166,
	0.14671814,
	0.14889796,
	0.15109102,
	0.15329725,
	0.15551654,
	0.15774883,
	0.15999404,
	0.16225207,
	0.16452284,
	0.16680627,
	0.16910227,
	0.17141074,
	0.17373161,
	0.17606479,
	0.17841020,
	0.18076773,
	0.18313730,
	0.18551883,
	0.18791223,
	0.19031739,
	0.19273423,
	0.19516267,
	0.19760260,
	0.20005395,
	0.20251662,
	0.20499049,
	0.20747550,
	0.20997155,
	0.21247853,
	0.21499637,
	0.21752495,
	0.22006418,
	0.22261398,
	0.22517425,
	0.22774488,
	0.23032577,
	0.23291685,
	0.23551799,
	0.23812912,
	0.24075012,
	0.24338090,
	0.24602138,
	0.24867141,
	0.25133094,
	0.25399986,
	0.25667804,
	0.25936541,
	0.26206183,
	0.26476726,
	0.26748157,
	0.27020460,
	0.27293634,
	0.27567664,
	0.27842540,
	0.28118253,
	0.28394789,
	0.28672141,
	0.28950298,
	0.29229251,
	0.29508984,
	0.29789492,
	0.30070761,
	0.30352783,
	0.30635545,
	0.30919039,
	0.31203252,
	0.31488174,
	0.31773794,
	0.32060102,
	0.32347086,
	0.32634738,
	0.32923043,
	0.33211994,
	0.33501577,
	0.33791780,
	0.34082597,
	0.34374017,
	0.34666023,
	0.34958607,
	0.35251760,
	0.35545471,
	0.35839725,
	0.36134514,
	0.36429825,
	0.36725649,
	0.37021974,
	0.37318787,
	0.37616080,
	0.37913838,
	0.38212052,
	0.38510713,
	0.38809806,
	0.39109322,
	0.39409247,
	0.39709574,
	0.40010288,
	0.40311378,
	0.40612835,
	0.40914646,
	0.41216800,
	0.41519284,
	0.41822088,
	0.42125201,
	0.42428610,
	0.42732307,
	0.43036276,
	0.43340510,
	0.43644992,
	0.43949717,
	0.44254667,
	0.44559836,
	0.44865209,
	0.45170778,
	0.45476526,
	0.45782447,
	0.46088526,
	0.46394753,
	0.46701115,
	0.47007602,
	0.47314203,
	0.47620904,
	0.47927696,
	0.48234564,
	0.48541501,
	0.48848492,
	0.49155527,
	0.49462593,
	0.49769679,
	0.50076777,
	0.50383866,
	0.50690943,
	0.50997996,
	0.51305008,
	0.51611978,
	0.51918876,
	0.52225709,
	0.52532458,
	0.52839112,
	0.53145653,
	0.53452080,
	0.53758377,
	0.54064530,
	0.54370534,
	0.54676372,
	0.54982030,
	0.55287504,
	0.55592775,
	0.55897838,
	0.56202674,
	0.56507277,
	0.56811637,
	0.57115740,
	0.57419574,
	0.57723129,
	0.58026391,
	0.58329356,
	0.58631998,
	0.58934319,
	0.59236300,
	0.59537935,
	0.59839213,
	0.60140115,
	0.60440636,
	0.60740763,
	0.61040485,
	0.61339796,
	0.61638671,
	0.61937112,
	0.62235099,
	0.62532628,
	0.62829679,
	0.63126254,
	0.63422328,
	0.63717896,
	0.64012945,
	0.64307469,
	0.64601451,
	0.64894885,
	0.65187758,
	0.65480053,
	0.65771765,
	0.66062886,
	0.66353399,
	0.66643292,
	0.66932559,
	0.67221189,
	0.67509168,
	0.67796487,
	0.68083137,
	0.68369102,
	0.68654376,
	0.68938947,
	0.69222796,
	0.69505930,
	0.69788319,
	0.70069969,
	0.70350856,
	0.70630980,
	0.70910323,
	0.71188879,
	0.71466637,
	0.71743584,
	0.72019708,
	0.72295004,
	0.72569460,
	0.72843057,
	0.73115802,
	0.73387671,
	0.73658657,
	0.73928750,
	0.74197942,
	0.74466223,
	0.74733579,
	0.75000000,
	0.75265479,
	0.75530005,
	0.75793570,
	0.76056159,
	0.76317769,
	0.76578385,
	0.76837993,
	0.77096593,
	0.77354175,
	0.77610719,
	0.77866220,
	0.78120679,
	0.78374070,
	0.78626388,
	0.78877634,
	0.79127783,
	0.79376841,
	0.79624784,
	0.79871613,
	0.80117315,
	0.80361879,
	0.80605298,
	0.80847567,
	0.81088668,
	0.81328595,
	0.81567341,
	0.81804895,
	0.82041258,
	0.82276404,
	0.82510334,
	0.82743037,
	0.82974505,
	0.83204728,
	0.83433700,
	0.83661413,
	0.83887857,
	0.84113020,
	0.84336895,
	0.84559476,
	0.84780753,
	0.85000718,
	0.85219359,
	0.85436678,
	0.85652655,
	0.85867292,
	0.86080569,
	0.86292493,
	0.86503041,
	0.86712217,
	0.86920005,
	0.87126404,
	0.87331396,
	0.87534988,
	0.87737155,
	0.87937903,
	0.88137221,
	0.88335103,
	0.88531536,
	0.88726515,
	0.88920033,
	0.89112079,
	0.89302653,
	0.89491749,
	0.89679348,
	0.89865452,
	0.90050054,
	0.90233147,
	0.90414721,
	0.90594769,
	0.90773284,
	0.90950263,
	0.91125697,
	0.91299576,
	0.91471905,
	0.91642660,
	0.91811854,
	0.91979462,
	0.92145491,
	0.92309934,
	0.92472774,
	0.92634016,
	0.92793643,
	0.92951661,
	0.93108058,
	0.93262833,
	0.93415970,
	0.93567473,
	0.93717331,
	0.93865538,
	0.94012094,
	0.94156986,
	0.94300216,
	0.94441772,
	0.94581652,
	0.94719851,
	0.94856364,
	0.94991183,
	0.95124304,
	0.95255727,
	0.95385438,
	0.95513439,
	0.95639724,
	0.95764285,
	0.95887119,
	0.96008229,
	0.96127594,
	0.96245223,
	0.96361113,
	0.96475244,
	0.96587628,
	0.96698254,
	0.96807116,
	0.96914214,
	0.97019541,
	0.97123098,
	0.97224873,
	0.97324872,
	0.97423083,
	0.97519499,
	0.97614127,
	0.97706962,
	0.97797996,
	0.97887224,
	0.97974646,
	0.98060262,
	0.98144060,
	0.98226047,
	0.98306215,
	0.98384553,
	0.98461074,
	0.98535764,
	0.98608619,
	0.98679644,
	0.98748833,
	0.98816186,
	0.98881692,
	0.98945355,
	0.99007177,
	0.99067146,
	0.99125260,
	0.99181527,
	0.99235940,
	0.99288487,
	0.99339181,
	0.99388015,
	0.99434984,
	0.99480087,
	0.99523324,
	0.99564695,
	0.99604195,
	0.99641824,
	0.99677581,
	0.99711460,
	0.99743468,
	0.99773598,
	0.99801850,
	0.99828219,
	0.99852717,
	0.99875331,
	0.99896061,
	0.99914908,
	0.99931878,
	0.99946964,
	0.99960160,
	0.99971473,
	0.99980903,
	0.99988449,
	0.99994105,
	0.99997878,
	0.99999762,
	0.99999762,
	0.99997878,
	0.99994105,
	0.99988449,
	0.99980903,
	0.99971473,
	0.99960160,
	0.99946964,
	0.99931878,
	0.99914908,
	0.99896061,
	0.99875331,
	0.99852717,
	0.99828219,
	0.99801850,
	0.99773598,
	0.99743468,
	0.99711460,
	0.99677581,
	0.99641824,
	0.99604195,
	0.99564695,
	0.99523324,
	0.99480087,
	0.99434984,
	0.99388015,
	0.99339181,
	0.99288487,
	0.99235940,
	0.99181527,
	0.99125260,
	0.99067146,
	0.99007177,
	0.98945355,
	0.98881692,
	0.98816186,
	0.98748833,
	0.98679644,
	0.98608619,
	0.98535764,
	0.98461074,
	0.98384553,
	0.98306215,
	0.98226047,
	0.98144060,
	0.98060262,
	0.97974646,
	0.97887224,
	0.97797996,
	0.97706962,
	0.97614127,
	0.97519499,
	0.97423083,
	0.97324872,
	0.97224873,
	0.97123098,
	0.97019541,
	0.96914214,
	0.96807116,
	0.96698254,
	0.96587628,
	0.96475244,
	0.96361113,
	0.96245223,
	0.96127594,
	0.96008229,
	0.95887119,
	0.95764285,
	0.95639724,
	0.95513439,
	0.95385438,
	0.95255727,
	0.95124304,
	0.94991183,
	0.94856364,
	0.94719851,
	0.94581652,
	0.94441772,
	0.94300216,
	0.94156986,
	0.94012094,
	0.93865538,
	0.93717331,
	0.93567473,
	0.93415970,
	0.93262833,
	0.93108058,
	0.92951661,
	0.92793643,
	0.92634016,
	0.92472774,
	0.92309934,
	0.92145491,
	0.91979462,
	0.91811854,
	0.91642660,
	0.91471905,
	0.91299576,
	0.91125697,
	0.90950263,
	0.90773284,
	0.90594769,
	0.90414721,
	0.90233147,
	0.90050054,
	0.89865452,
	0.89679348,
	0.89491749,
	0.89302653,
	0.89112079,
	0.88920033,
	0.88726515,
	0.88531536,
	0.88335103,
	0.88137221,
	0.87937903,
	0.87737155,
	0.87534988,
	0.87331396,
	0.87126404,
	0.86920005,
	0.86712217,
	0.86503041,
	0.86292493,
	0.86080569,
	0.85867292,
	0.85652655,
	0.85436678,
	0.85219359,
	0.85000718,
	0.84780753,
	0.84559476,
	0.84336895,
	0.84113020,
	0.83887857,
	0.83661413,
	0.83433700,
	0.83204728,
	0.82974505,
	0.82743037,
	0.82510334,
	0.82276404,
	0.82041258,
	0.81804895,
	0.81567341,
	0.81328595,
	0.81088668,
	0.80847567,
	0.80605298,
	0.80361879,
	0.80117315,
	0.79871613,
	0.79624784,
	0.79376841,
	0.79127783,
	0.78877634,
	0.78626388,
	0.78374070,
	0.78120679,
	0.77866220,
	0.77610719,
	0.77354175,
	0.77096593,
	0.76837993,
	0.76578385,
	0.76317769,
	0.76056159,
	0.75793570,
	0.75530005,
	0.75265479,
	0.75000000,
	0.74733579,
	0.74466223,
	0.74197942,
	0.73928750,
	0.73658657,
	0.73387671,
	0.73115802,
	0.72843057,
	0.72569460,
	0.72295004,
	0.72019708,
	0.71743584,
	0.71466637,
	0.71188879,
	0.70910323,
	0.70630980,
	0.70350856,
	0.70069969,
	0.69788319,
	0.69505930,
	0.69222796,
	0.68938947,
	0.68654376,
	0.68369102,
	0.68083137,
	0.67796487,
	0.67509168,
	0.67221189,
	0.66932559,
	0.66643292,
	0.66353399,
	0.66062886,
	0.65771765,
	0.65480053,
	0.65187758,
	0.64894885,
	0.64601451,
	0.64307469,
	0.64012945,
	0.63717896,
	0.63422328,
	0.63126254,
	0.62829679,
	0.62532628,
	0.62235099,
	0.61937112,
	0.61638671,
	0.61339796,
	0.61040485,
	0.60740763,
	0.60440636,
	0.60140115,
	0.59839213,
	0.59537935,
	0.59236300,
	0.58934319,
	0.58631998,
	0.58329356,
	0.58026391,
	0.57723129,
	0.57419574,
	0.57115740,
	0.56811637,
	0.56507277,
	0.56202674,
	0.55897838,
	0.55592775,
	0.55287504,
	0.54982030,
	0.54676372,
	0.54370534,
	0.54064530,
	0.53758377,
	0.53452080,
	0.53145653,
	0.52839112,
	0.52532458,
	0.52225709,
	0.51918876,
	0.51611978,
	0.51305008,
	0.50997996,
	0.50690943,
	0.50383866,
	0.50076777,
	0.49769679,
	0.49462593,
	0.49155527,
	0.48848492,
	0.48541501,
	0.48234564,
	0.47927696,
	0.47620904,
	0.47314203,
	0.47007602,
	0.46701115,
	0.46394753,
	0.46088526,
	0.45782447,
	0.45476526,
	0.45170778,
	0.44865209,
	0.44559836,
	0.44254667,
	0.43949717,
	0.43644992,
	0.43340510,
	0.43036276,
	0.42732307,
	0.42428610,
	0.42125201,
	0.41822088,
	0.41519284,
	0.41216800,
	0.40914646,
	0.40612835,
	0.40311378,
	0.40010288,
	0.39709574,
	0.39409247,
	0.39109322,
	0.38809806,
	0.38510713,
	0.38212052,
	0.37913838,
	0.37616080,
	0.37318787,
	0.37021974,
	0.36725649,
	0.36429825,
	0.36134514,
	0.35839725,
	0.35545471,
	0.35251760,
	0.34958607,
	0.34666023,
	0.34374017,
	0.34082597,
	0.33791780,
	0.33501577,
	0.33211994,
	0.32923043,
	0.32634738,
	0.32347086,
	0.32060102,
	0.31773794,
	0.31488174,
	0.31203252,
	0.30919039,
	0.30635545,
	0.30352783,
	0.30070761,
	0.29789492,
	0.29508984,
	0.29229251,
	0.28950298,
	0.28672141,
	0.28394789,
	0.28118253,
	0.27842540,
	0.27567664,
	0.27293634,
	0.27020460,
	0.26748157,
	0.26476726,
	0.26206183,
	0.25936541,
	0.25667804,
	0.25399986,
	0.25133094,
	0.24867141,
	0.24602138,
	0.24338090,
	0.24075012,
	0.23812912,
	0.23551799,
	0.23291685,
	0.23032577,
	0.22774488,
	0.22517425,
	0.22261398,
	0.22006418,
	0.21752495,
	0.21499637,
	0.21247853,
	0.20997155,
	0.20747550,
	0.20499049,
	0.20251662,
	0.20005395,
	0.19760260,
	0.19516267,
	0.19273423,
	0.19031739,
	0.18791223,
	0.18551883,
	0.18313730,
	0.18076773,
	0.17841020,
	0.17606479,
	0.17373161,
	0.17141074,
	0.16910227,
	0.16680627,
	0.16452284,
	0.16225207,
	0.15999404,
	0.15774883,
	0.15551654,
	0.15329725,
	0.15109102,
	0.14889796,
	0.14671814,
	0.14455166,
	0.14239858,
	0.14025900,
	0.13813297,
	0.13602062,
	0.13392198,
	0.13183714,
	0.12976621,
	0.12770924,
	0.12566631,
	0.12363750,
	0.12162290,
	0.11962256,
	0.11763657,
	0.11566501,
	0.11370794,
	0.11176545,
	0.10983761,
	0.10792448,
	0.10602614,
	0.10414266,
	0.10227411,
	0.10042057,
	0.098582111,
	0.096758783,
	0.094950669,
	0.093157835,
	0.091380350,
	0.089618281,
	0.087871686,
	0.086140648,
	0.084425211,
	0.082725458,
	0.081041440,
	0.079373233,
	0.077720888,
	0.076084480,
	0.074464060,
	0.072859690,
	0.071271434,
	0.069699347,
	0.068143502,
	0.066603936,
	0.065080725,
	0.063573927,
	0.062083583,
	0.060609762,
	0.059152514,
	0.057711899,
	0.056287967,
	0.054880776,
	0.053490374,
	0.052116815,
	0.050760150,
	0.049420435,
	0.048097715,
	0.046792045,
	0.045503467,
	0.044232041,
	0.042977802,
	0.041740805,
	0.040521093,
	0.039318718,
	0.038133718,
	0.036966141,
	0.035816032,
	0.034683436,
	0.033568390,
	0.032470942,
	0.031391125,
	0.030328991,
	0.029284572,
	0.028257910,
	0.027249044,
	0.026258012,
	0.025284851,
	0.024329597,
	0.023392286,
	0.022472955,
	0.021571638,
	0.020688370,
	0.019823181,
	0.018976107,
	0.018147178,
	0.017336426,
	0.016543882,
	0.015769575,
	0.015013536,
	0.014275790,
	0.013556369,
	0.012855296,
	0.012172601,
	0.011508308,
	0.010862443,
	0.010235029,
	0.0096260915,
	0.0090356516,
	0.0084637320,
	0.0079103550,
	0.0073755416,
	0.0068593114,
	0.0063616838,
	0.0058826776,
	0.0054223114,
	0.0049806018,
	0.0045575658,
	0.0041532195,
	0.0037675784,
	0.0034006566,
	0.0030524679,
	0.0027230256,
	0.0024123422,
	0.0021204292,
	0.0018472979,
	0.0015929585,
	0.0013574203,
	0.0011406926,
	0.00094278343,
	0.00076370023,
	0.00060344971,
	0.00046203795,
	0.00033947034,
	0.00023575145,
	0.00015088519,
	8.4874788e-05,
	3.7722722e-05,
	9.4307688e-06,
	0
};