/*
 * blackman.h
 *
 *  Created on: 16 May 2020
 *      Author: ivanv
 */

#ifndef INC_BLACKMAN_H_
#define INC_BLACKMAN_H_
float32_t blackman_window[1280] =
{
0	,
2.17E-06	,
8.69E-06	,
1.95E-05	,
3.48E-05	,
5.43E-05	,
7.82E-05	,
0.000106474	,
0.000139086	,
0.000176057	,
0.00021739	,
0.00026309	,
0.000313161	,
0.000367609	,
0.00042644	,
0.000489659	,
0.000557273	,
0.000629289	,
0.000705714	,
0.000786557	,
0.000871825	,
0.000961528	,
0.001055675	,
0.001154275	,
0.001257339	,
0.001364876	,
0.001476899	,
0.001593417	,
0.001714444	,
0.001839992	,
0.001970073	,
0.0021047	,
0.002243886	,
0.002387647	,
0.002535996	,
0.002688948	,
0.002846518	,
0.003008722	,
0.003175576	,
0.003347096	,
0.0035233	,
0.003704204	,
0.003889827	,
0.004080186	,
0.004275299	,
0.004475187	,
0.004679867	,
0.004889361	,
0.005103686	,
0.005322865	,
0.005546918	,
0.005775866	,
0.006009731	,
0.006248535	,
0.006492299	,
0.006741047	,
0.006994802	,
0.007253586	,
0.007517425	,
0.007786341	,
0.00806036	,
0.008339506	,
0.008623804	,
0.00891328	,
0.009207959	,
0.009507868	,
0.009813034	,
0.010123482	,
0.01043924	,
0.010760335	,
0.011086796	,
0.01141865	,
0.011755925	,
0.012098651	,
0.012446856	,
0.012800568	,
0.013159819	,
0.013524637	,
0.013895053	,
0.014271097	,
0.014652799	,
0.015040191	,
0.015433303	,
0.015832167	,
0.016236814	,
0.016647277	,
0.017063587	,
0.017485777	,
0.017913879	,
0.018347926	,
0.018787952	,
0.019233988	,
0.01968607	,
0.020144229	,
0.020608501	,
0.02107892	,
0.021555518	,
0.022038332	,
0.022527394	,
0.023022741	,
0.023524407	,
0.024032428	,
0.024546837	,
0.025067672	,
0.025594966	,
0.026128757	,
0.026669079	,
0.027215969	,
0.027769463	,
0.028329597	,
0.028896407	,
0.02946993	,
0.030050202	,
0.03063726	,
0.03123114	,
0.031831879	,
0.032439514	,
0.033054082	,
0.033675621	,
0.034304166	,
0.034939755	,
0.035582426	,
0.036232215	,
0.036889159	,
0.037553297	,
0.038224665	,
0.0389033	,
0.03958924	,
0.040282522	,
0.040983184	,
0.041691262	,
0.042406795	,
0.043129818	,
0.043860371	,
0.044598489	,
0.045344211	,
0.046097572	,
0.046858611	,
0.047627364	,
0.048403869	,
0.049188162	,
0.049980279	,
0.050780259	,
0.051588137	,
0.052403951	,
0.053227736	,
0.054059528	,
0.054899366	,
0.055747283	,
0.056603317	,
0.057467503	,
0.058339877	,
0.059220475	,
0.060109332	,
0.061006484	,
0.061911965	,
0.062825811	,
0.063748056	,
0.064678734	,
0.065617882	,
0.066565532	,
0.067521718	,
0.068486476	,
0.069459837	,
0.070441836	,
0.071432505	,
0.072431878	,
0.073439988	,
0.074456866	,
0.075482545	,
0.076517057	,
0.077560434	,
0.078612707	,
0.079673907	,
0.080744065	,
0.081823212	,
0.082911377	,
0.084008592	,
0.085114885	,
0.086230286	,
0.087354823	,
0.088488527	,
0.089631424	,
0.090783544	,
0.091944913	,
0.09311556	,
0.09429551	,
0.095484792	,
0.09668343	,
0.097891452	,
0.099108881	,
0.100335745	,
0.101572066	,
0.102817871	,
0.104073182	,
0.105338023	,
0.106612417	,
0.107896388	,
0.109189956	,
0.110493145	,
0.111805975	,
0.113128468	,
0.114460643	,
0.115802522	,
0.117154123	,
0.118515466	,
0.11988657	,
0.121267452	,
0.12265813	,
0.124058622	,
0.125468945	,
0.126889114	,
0.128319145	,
0.129759054	,
0.131208855	,
0.132668562	,
0.13413819	,
0.135617751	,
0.137107258	,
0.138606723	,
0.140116157	,
0.141635572	,
0.143164978	,
0.144704384	,
0.146253801	,
0.147813237	,
0.149382699	,
0.150962197	,
0.152551736	,
0.154151323	,
0.155760964	,
0.157380665	,
0.159010429	,
0.160650261	,
0.162300165	,
0.163960143	,
0.165630198	,
0.16731033	,
0.169000542	,
0.170700833	,
0.172411203	,
0.174131652	,
0.175862177	,
0.177602777	,
0.179353448	,
0.181114187	,
0.18288499	,
0.184665853	,
0.186456769	,
0.188257733	,
0.190068738	,
0.191889775	,
0.193720838	,
0.195561918	,
0.197413004	,
0.199274087	,
0.201145155	,
0.203026198	,
0.204917203	,
0.206818156	,
0.208729045	,
0.210649855	,
0.212580571	,
0.214521176	,
0.216471656	,
0.218431991	,
0.220402166	,
0.22238216	,
0.224371954	,
0.226371529	,
0.228380864	,
0.230399937	,
0.232428726	,
0.234467207	,
0.236515358	,
0.238573153	,
0.240640568	,
0.242717577	,
0.244804152	,
0.246900267	,
0.249005893	,
0.251121002	,
0.253245564	,
0.255379548	,
0.257522924	,
0.259675659	,
0.26183772	,
0.264009075	,
0.26618969	,
0.268379529	,
0.270578556	,
0.272786736	,
0.275004031	,
0.277230404	,
0.279465814	,
0.281710224	,
0.283963593	,
0.28622588	,
0.288497044	,
0.290777041	,
0.293065828	,
0.295363363	,
0.297669599	,
0.299984491	,
0.302307994	,
0.304640059	,
0.30698064	,
0.309329688	,
0.311687153	,
0.314052985	,
0.316427134	,
0.318809548	,
0.321200175	,
0.323598961	,
0.326005853	,
0.328420795	,
0.330843734	,
0.333274612	,
0.335713374	,
0.33815996	,
0.340614313	,
0.343076374	,
0.345546083	,
0.34802338	,
0.350508202	,
0.353000488	,
0.355500176	,
0.358007201	,
0.3605215	,
0.363043007	,
0.365571656	,
0.368107382	,
0.370650117	,
0.373199792	,
0.37575634	,
0.378319691	,
0.380889775	,
0.383466522	,
0.386049859	,
0.388639714	,
0.391236015	,
0.393838687	,
0.396447658	,
0.39906285	,
0.40168419	,
0.4043116	,
0.406945003	,
0.409584321	,
0.412229477	,
0.41488039	,
0.417536981	,
0.42019917	,
0.422866875	,
0.425540015	,
0.428218506	,
0.430902266	,
0.433591212	,
0.436285257	,
0.438984318	,
0.441688309	,
0.444397142	,
0.447110732	,
0.449828991	,
0.452551829	,
0.455279159	,
0.45801089	,
0.460746933	,
0.463487197	,
0.466231591	,
0.468980022	,
0.471732397	,
0.474488625	,
0.477248611	,
0.48001226	,
0.482779478	,
0.48555017	,
0.488324239	,
0.491101589	,
0.493882123	,
0.496665742	,
0.49945235	,
0.502241846	,
0.505034132	,
0.507829108	,
0.510626673	,
0.513426727	,
0.516229168	,
0.519033895	,
0.521840804	,
0.524649794	,
0.52746076	,
0.530273599	,
0.533088206	,
0.535904478	,
0.538722307	,
0.54154159	,
0.544362219	,
0.547184088	,
0.550007089	,
0.552831116	,
0.555656061	,
0.558481814	,
0.561308268	,
0.564135314	,
0.56696284	,
0.569790739	,
0.572618899	,
0.575447209	,
0.578275559	,
0.581103837	,
0.583931931	,
0.586759729	,
0.589587119	,
0.592413987	,
0.595240221	,
0.598065707	,
0.600890331	,
0.603713979	,
0.606536536	,
0.609357888	,
0.61217792	,
0.614996516	,
0.617813561	,
0.620628939	,
0.623442534	,
0.626254229	,
0.629063909	,
0.631871455	,
0.634676751	,
0.637479679	,
0.640280123	,
0.643077964	,
0.645873084	,
0.648665366	,
0.65145469	,
0.654240939	,
0.657023994	,
0.659803737	,
0.662580047	,
0.665352806	,
0.668121895	,
0.670887194	,
0.673648584	,
0.676405946	,
0.679159159	,
0.681908104	,
0.684652661	,
0.687392709	,
0.69012813	,
0.692858802	,
0.695584606	,
0.698305421	,
0.701021128	,
0.703731605	,
0.706436733	,
0.709136391	,
0.711830459	,
0.714518816	,
0.717201343	,
0.719877918	,
0.722548422	,
0.725212735	,
0.727870735	,
0.730522304	,
0.733167321	,
0.735805665	,
0.738437218	,
0.741061858	,
0.743679467	,
0.746289925	,
0.748893111	,
0.751488908	,
0.754077194	,
0.756657852	,
0.759230761	,
0.761795804	,
0.764352862	,
0.766901815	,
0.769442545	,
0.771974935	,
0.774498866	,
0.77701422	,
0.779520881	,
0.782018729	,
0.784507649	,
0.786987523	,
0.789458235	,
0.791919668	,
0.794371706	,
0.796814233	,
0.799247134	,
0.801670293	,
0.804083595	,
0.806486925	,
0.808880168	,
0.811263212	,
0.813635941	,
0.815998243	,
0.818350004	,
0.820691112	,
0.823021454	,
0.825340917	,
0.827649391	,
0.829946764	,
0.832232925	,
0.834507764	,
0.83677117	,
0.839023033	,
0.841263246	,
0.843491697	,
0.84570828	,
0.847912887	,
0.850105409	,
0.852285739	,
0.854453772	,
0.8566094	,
0.858752519	,
0.860883024	,
0.863000808	,
0.86510577	,
0.867197804	,
0.869276808	,
0.871342679	,
0.873395315	,
0.875434616	,
0.877460479	,
0.879472804	,
0.881471492	,
0.883456444	,
0.88542756	,
0.887384744	,
0.889327896	,
0.891256922	,
0.893171723	,
0.895072205	,
0.896958273	,
0.898829832	,
0.900686789	,
0.902529051	,
0.904356524	,
0.906169119	,
0.907966742	,
0.909749304	,
0.911516716	,
0.913268887	,
0.915005731	,
0.916727159	,
0.918433083	,
0.920123419	,
0.92179808	,
0.923456982	,
0.925100041	,
0.926727173	,
0.928338296	,
0.929933327	,
0.931512187	,
0.933074794	,
0.934621069	,
0.936150934	,
0.93766431	,
0.93916112	,
0.940641288	,
0.942104738	,
0.943551395	,
0.944981187	,
0.946394038	,
0.947789877	,
0.949168633	,
0.950530234	,
0.951874612	,
0.953201696	,
0.954511419	,
0.955803714	,
0.957078513	,
0.958335752	,
0.959575366	,
0.960797291	,
0.962001463	,
0.963187822	,
0.964356305	,
0.965506853	,
0.966639405	,
0.967753904	,
0.968850292	,
0.969928512	,
0.970988509	,
0.972030227	,
0.973053612	,
0.974058612	,
0.975045175	,
0.976013249	,
0.976962784	,
0.977893732	,
0.978806042	,
0.979699669	,
0.980574566	,
0.981430687	,
0.982267988	,
0.983086425	,
0.983885956	,
0.984666539	,
0.985428134	,
0.9861707	,
0.986894199	,
0.987598594	,
0.988283848	,
0.988949925	,
0.98959679	,
0.990224409	,
0.99083275	,
0.991421782	,
0.991991472	,
0.992541792	,
0.993072713	,
0.993584208	,
0.994076248	,
0.994548809	,
0.995001866	,
0.995435395	,
0.995849374	,
0.996243781	,
0.996618595	,
0.996973797	,
0.997309368	,
0.997625291	,
0.997921548	,
0.998198126	,
0.998455008	,
0.998692182	,
0.998909635	,
0.999107355	,
0.999285334	,
0.99944356	,
0.999582026	,
0.999700725	,
0.99979965	,
0.999878796	,
0.99993816	,
0.999977737	,
0.999997526	,
0.999997526	,
0.999977737	,
0.99993816	,
0.999878796	,
0.99979965	,
0.999700725	,
0.999582026	,
0.99944356	,
0.999285334	,
0.999107355	,
0.998909635	,
0.998692182	,
0.998455008	,
0.998198126	,
0.997921548	,
0.997625291	,
0.997309368	,
0.996973797	,
0.996618595	,
0.996243781	,
0.995849374	,
0.995435395	,
0.995001866	,
0.994548809	,
0.994076248	,
0.993584208	,
0.993072713	,
0.992541792	,
0.991991472	,
0.991421782	,
0.99083275	,
0.990224409	,
0.98959679	,
0.988949925	,
0.988283848	,
0.987598594	,
0.986894199	,
0.9861707	,
0.985428134	,
0.984666539	,
0.983885956	,
0.983086425	,
0.982267988	,
0.981430687	,
0.980574566	,
0.979699669	,
0.978806042	,
0.977893732	,
0.976962784	,
0.976013249	,
0.975045175	,
0.974058612	,
0.973053612	,
0.972030227	,
0.970988509	,
0.969928512	,
0.968850292	,
0.967753904	,
0.966639405	,
0.965506853	,
0.964356305	,
0.963187822	,
0.962001463	,
0.960797291	,
0.959575366	,
0.958335752	,
0.957078513	,
0.955803714	,
0.954511419	,
0.953201696	,
0.951874612	,
0.950530234	,
0.949168633	,
0.947789877	,
0.946394038	,
0.944981187	,
0.943551395	,
0.942104738	,
0.940641288	,
0.93916112	,
0.93766431	,
0.936150934	,
0.934621069	,
0.933074794	,
0.931512187	,
0.929933327	,
0.928338296	,
0.926727173	,
0.925100041	,
0.923456982	,
0.92179808	,
0.920123419	,
0.918433083	,
0.916727159	,
0.915005731	,
0.913268887	,
0.911516716	,
0.909749304	,
0.907966742	,
0.906169119	,
0.904356524	,
0.902529051	,
0.900686789	,
0.898829832	,
0.896958273	,
0.895072205	,
0.893171723	,
0.891256922	,
0.889327896	,
0.887384744	,
0.88542756	,
0.883456444	,
0.881471492	,
0.879472804	,
0.877460479	,
0.875434616	,
0.873395315	,
0.871342679	,
0.869276808	,
0.867197804	,
0.86510577	,
0.863000808	,
0.860883024	,
0.858752519	,
0.8566094	,
0.854453772	,
0.852285739	,
0.850105409	,
0.847912887	,
0.84570828	,
0.843491697	,
0.841263246	,
0.839023033	,
0.83677117	,
0.834507764	,
0.832232925	,
0.829946764	,
0.827649391	,
0.825340917	,
0.823021454	,
0.820691112	,
0.818350004	,
0.815998243	,
0.813635941	,
0.811263212	,
0.808880168	,
0.806486925	,
0.804083595	,
0.801670293	,
0.799247134	,
0.796814233	,
0.794371706	,
0.791919668	,
0.789458235	,
0.786987523	,
0.784507649	,
0.782018729	,
0.779520881	,
0.77701422	,
0.774498866	,
0.771974935	,
0.769442545	,
0.766901815	,
0.764352862	,
0.761795804	,
0.759230761	,
0.756657852	,
0.754077194	,
0.751488908	,
0.748893111	,
0.746289925	,
0.743679467	,
0.741061858	,
0.738437218	,
0.735805665	,
0.733167321	,
0.730522304	,
0.727870735	,
0.725212735	,
0.722548422	,
0.719877918	,
0.717201343	,
0.714518816	,
0.711830459	,
0.709136391	,
0.706436733	,
0.703731605	,
0.701021128	,
0.698305421	,
0.695584606	,
0.692858802	,
0.69012813	,
0.687392709	,
0.684652661	,
0.681908104	,
0.679159159	,
0.676405946	,
0.673648584	,
0.670887194	,
0.668121895	,
0.665352806	,
0.662580047	,
0.659803737	,
0.657023994	,
0.654240939	,
0.65145469	,
0.648665366	,
0.645873084	,
0.643077964	,
0.640280123	,
0.637479679	,
0.634676751	,
0.631871455	,
0.629063909	,
0.626254229	,
0.623442534	,
0.620628939	,
0.617813561	,
0.614996516	,
0.61217792	,
0.609357888	,
0.606536536	,
0.603713979	,
0.600890331	,
0.598065707	,
0.595240221	,
0.592413987	,
0.589587119	,
0.586759729	,
0.583931931	,
0.581103837	,
0.578275559	,
0.575447209	,
0.572618899	,
0.569790739	,
0.56696284	,
0.564135314	,
0.561308268	,
0.558481814	,
0.555656061	,
0.552831116	,
0.550007089	,
0.547184088	,
0.544362219	,
0.54154159	,
0.538722307	,
0.535904478	,
0.533088206	,
0.530273599	,
0.52746076	,
0.524649794	,
0.521840804	,
0.519033895	,
0.516229168	,
0.513426727	,
0.510626673	,
0.507829108	,
0.505034132	,
0.502241846	,
0.49945235	,
0.496665742	,
0.493882123	,
0.491101589	,
0.488324239	,
0.48555017	,
0.482779478	,
0.48001226	,
0.477248611	,
0.474488625	,
0.471732397	,
0.468980022	,
0.466231591	,
0.463487197	,
0.460746933	,
0.45801089	,
0.455279159	,
0.452551829	,
0.449828991	,
0.447110732	,
0.444397142	,
0.441688309	,
0.438984318	,
0.436285257	,
0.433591212	,
0.430902266	,
0.428218506	,
0.425540015	,
0.422866875	,
0.42019917	,
0.417536981	,
0.41488039	,
0.412229477	,
0.409584321	,
0.406945003	,
0.4043116	,
0.40168419	,
0.39906285	,
0.396447658	,
0.393838687	,
0.391236015	,
0.388639714	,
0.386049859	,
0.383466522	,
0.380889775	,
0.378319691	,
0.37575634	,
0.373199792	,
0.370650117	,
0.368107382	,
0.365571656	,
0.363043007	,
0.3605215	,
0.358007201	,
0.355500176	,
0.353000488	,
0.350508202	,
0.34802338	,
0.345546083	,
0.343076374	,
0.340614313	,
0.33815996	,
0.335713374	,
0.333274612	,
0.330843734	,
0.328420795	,
0.326005853	,
0.323598961	,
0.321200175	,
0.318809548	,
0.316427134	,
0.314052985	,
0.311687153	,
0.309329688	,
0.30698064	,
0.304640059	,
0.302307994	,
0.299984491	,
0.297669599	,
0.295363363	,
0.293065828	,
0.290777041	,
0.288497044	,
0.28622588	,
0.283963593	,
0.281710224	,
0.279465814	,
0.277230404	,
0.275004031	,
0.272786736	,
0.270578556	,
0.268379529	,
0.26618969	,
0.264009075	,
0.26183772	,
0.259675659	,
0.257522924	,
0.255379548	,
0.253245564	,
0.251121002	,
0.249005893	,
0.246900267	,
0.244804152	,
0.242717577	,
0.240640568	,
0.238573153	,
0.236515358	,
0.234467207	,
0.232428726	,
0.230399937	,
0.228380864	,
0.226371529	,
0.224371954	,
0.22238216	,
0.220402166	,
0.218431991	,
0.216471656	,
0.214521176	,
0.212580571	,
0.210649855	,
0.208729045	,
0.206818156	,
0.204917203	,
0.203026198	,
0.201145155	,
0.199274087	,
0.197413004	,
0.195561918	,
0.193720838	,
0.191889775	,
0.190068738	,
0.188257733	,
0.186456769	,
0.184665853	,
0.18288499	,
0.181114187	,
0.179353448	,
0.177602777	,
0.175862177	,
0.174131652	,
0.172411203	,
0.170700833	,
0.169000542	,
0.16731033	,
0.165630198	,
0.163960143	,
0.162300165	,
0.160650261	,
0.159010429	,
0.157380665	,
0.155760964	,
0.154151323	,
0.152551736	,
0.150962197	,
0.149382699	,
0.147813237	,
0.146253801	,
0.144704384	,
0.143164978	,
0.141635572	,
0.140116157	,
0.138606723	,
0.137107258	,
0.135617751	,
0.13413819	,
0.132668562	,
0.131208855	,
0.129759054	,
0.128319145	,
0.126889114	,
0.125468945	,
0.124058622	,
0.12265813	,
0.121267452	,
0.11988657	,
0.118515466	,
0.117154123	,
0.115802522	,
0.114460643	,
0.113128468	,
0.111805975	,
0.110493145	,
0.109189956	,
0.107896388	,
0.106612417	,
0.105338023	,
0.104073182	,
0.102817871	,
0.101572066	,
0.100335745	,
0.099108881	,
0.097891452	,
0.09668343	,
0.095484792	,
0.09429551	,
0.09311556	,
0.091944913	,
0.090783544	,
0.089631424	,
0.088488527	,
0.087354823	,
0.086230286	,
0.085114885	,
0.084008592	,
0.082911377	,
0.081823212	,
0.080744065	,
0.079673907	,
0.078612707	,
0.077560434	,
0.076517057	,
0.075482545	,
0.074456866	,
0.073439988	,
0.072431878	,
0.071432505	,
0.070441836	,
0.069459837	,
0.068486476	,
0.067521718	,
0.066565532	,
0.065617882	,
0.064678734	,
0.063748056	,
0.062825811	,
0.061911965	,
0.061006484	,
0.060109332	,
0.059220475	,
0.058339877	,
0.057467503	,
0.056603317	,
0.055747283	,
0.054899366	,
0.054059528	,
0.053227736	,
0.052403951	,
0.051588137	,
0.050780259	,
0.049980279	,
0.049188162	,
0.048403869	,
0.047627364	,
0.046858611	,
0.046097572	,
0.045344211	,
0.044598489	,
0.043860371	,
0.043129818	,
0.042406795	,
0.041691262	,
0.040983184	,
0.040282522	,
0.03958924	,
0.0389033	,
0.038224665	,
0.037553297	,
0.036889159	,
0.036232215	,
0.035582426	,
0.034939755	,
0.034304166	,
0.033675621	,
0.033054082	,
0.032439514	,
0.031831879	,
0.03123114	,
0.03063726	,
0.030050202	,
0.02946993	,
0.028896407	,
0.028329597	,
0.027769463	,
0.027215969	,
0.026669079	,
0.026128757	,
0.025594966	,
0.025067672	,
0.024546837	,
0.024032428	,
0.023524407	,
0.023022741	,
0.022527394	,
0.022038332	,
0.021555518	,
0.02107892	,
0.020608501	,
0.020144229	,
0.01968607	,
0.019233988	,
0.018787952	,
0.018347926	,
0.017913879	,
0.017485777	,
0.017063587	,
0.016647277	,
0.016236814	,
0.015832167	,
0.015433303	,
0.015040191	,
0.014652799	,
0.014271097	,
0.013895053	,
0.013524637	,
0.013159819	,
0.012800568	,
0.012446856	,
0.012098651	,
0.011755925	,
0.01141865	,
0.011086796	,
0.010760335	,
0.01043924	,
0.010123482	,
0.009813034	,
0.009507868	,
0.009207959	,
0.00891328	,
0.008623804	,
0.008339506	,
0.00806036	,
0.007786341	,
0.007517425	,
0.007253586	,
0.006994802	,
0.006741047	,
0.006492299	,
0.006248535	,
0.006009731	,
0.005775866	,
0.005546918	,
0.005322865	,
0.005103686	,
0.004889361	,
0.004679867	,
0.004475187	,
0.004275299	,
0.004080186	,
0.003889827	,
0.003704204	,
0.0035233	,
0.003347096	,
0.003175576	,
0.003008722	,
0.002846518	,
0.002688948	,
0.002535996	,
0.002387647	,
0.002243886	,
0.0021047	,
0.001970073	,
0.001839992	,
0.001714444	,
0.001593417	,
0.001476899	,
0.001364876	,
0.001257339	,
0.001154275	,
0.001055675	,
0.000961528	,
0.000871825	,
0.000786557	,
0.000705714	,
0.000629289	,
0.000557273	,
0.000489659	,
0.00042644	,
0.000367609	,
0.000313161	,
0.00026309	,
0.00021739	,
0.000176057	,
0.000139086	,
0.000106474	,
7.82E-05	,
5.43E-05	,
3.48E-05	,
1.95E-05	,
8.69E-06	,
2.17E-06	,
0
};

#endif /* INC_BLACKMAN_H_ */