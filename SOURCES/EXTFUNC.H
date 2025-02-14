/*様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様*

    栩栩栩� 栩� 栩� 栩栩栩� 栩栩栩� 栩� 栩� 栩� 栩� 栩栩栩�         栩� 栩�
    栩敖陳� 栩� 栩� 青栩敖� 栩敖陳� 栩� 栩� 栩杰栩� 栩敖陳�         栩� 栩�
    栩栩杰  拙栩框�   栩�   栩栩杰  栩� 栩� 栩栩栩� 栩�             栩栩栩�
    栩敖潰  栩敖栩�   栩�   栩敖潰  栩� 栩� 栩无栩� 栩�             栩敖栩�
    栩栩栩� 栩� 栩�   栩�   栩�     栩栩栩� 栩垣栩� 栩栩栩�   栩�   栩� 栩�
    青陳陳� 青� 青�   青�   青�     青陳陳� 青� 青� 青陳陳�   青�   青� 青�

 *様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様*/

extern	S32	FlagHeroOutX ;	// Twinsen sort du cube en X
extern	S32	FlagHeroOutZ ;	// Twinsen sort du cube en Z

/*陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳*/
// Game
//烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝�
extern	void	Init3DExt( void ) ;

//烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝�
extern	void	Clear3dExt( void ) ;

//烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝�
extern	Func_Init3DView	Init3DExtView ;

//烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝�
extern	void	Init3DExtGame( void ) ;

//烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝�
// Map
extern	Func_InitGrille	InitGrilleExt ;

//烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝�
extern	void	AffGrilleExt( void ) ;

/*陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳*/
// Graph
/*--------------------------------------------------------------------------*/
extern	void	CalculeScaleFactorSprite( S32 x, S32 y, S32 z, S32 scaleorg ) ;

/*--------------------------------------------------------------------------*/
extern	void	AffGraphExt( S32 xp, S32 yp, S32 sprite ) ;

/*--------------------------------------------------------------------------*/

/*陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳*/
// Objects
/*--------------------------------------------------------------------------*/
extern	Func_GetShadow	GetShadowExt ;

/*--------------------------------------------------------------------------*/
extern	Func_WorldColBrick	WorldColBrickExt ;

//烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝烝�
extern Func_WorldColBrickVisible	WorldColBrickVisibleExt ;

/*--------------------------------------------------------------------------*/
extern	Func_ReajustPosExtra	ReajustPosExtraExt ;

/*--------------------------------------------------------------------------*/
#ifndef	LBA_EDITOR
extern	Func_FullWorldColBrick	FullWorldColBrickExt ;
#endif

/*--------------------------------------------------------------------------*/
extern	S32	TestZVDecorsZV( T_DECORS *objet,
				S32 xpmin, S32 ypmin, S32 zpmin,
				S32 xpmax, S32 ypmax, S32 zpmax
				 ) ;

/*--------------------------------------------------------------------------*/
extern	U8	WorldColBrickDecors( 	S32 xpmin, S32 ypmin, S32 zpmin,
					S32 xpmax, S32 ypmax, S32 zpmax ) ;

/*--------------------------------------------------------------------------*/
extern	S32	ReajustPosDecors( S32 xmin, S32 zmin,
				  S32 xmax, S32 zmax,
				  S32 y0, S32 y1 ) ;

/*--------------------------------------------------------------------------*/
extern	U8	WorldColBrickFullExt( S32 xw, S32 yw, S32 zw ) ;

/*--------------------------------------------------------------------------*/
extern	void	InitSkating( void ) ;

/*--------------------------------------------------------------------------*/
extern	Func_ReajustPos	ReajustPosExt ;

/*--------------------------------------------------------------------------*/
extern	S32    GetSkateBeta( S32 nx, S32 nz ) ;

/*--------------------------------------------------------------------------*/
extern	Func_DoAnim	DoAnimExt ;

/*--------------------------------------------------------------------------*/

/*陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳*/
// Tools (PERSO)
#ifdef	LBA_EDITOR
extern	void	DrawGrilleFeuille3D( S32 xi, S32 zi ) ;
extern	S32	GereMouseMovements( S32 boutons ) ;
#endif

extern	void 	AffPalette( void ) ;

/*--------------------------------------------------------------------------*/
#ifdef	LBA_EDITOR
extern	S32	GereExtKeys( U32 key, U32 flagmenu ) ;
#else
extern	S32	GereExtKeys( U32 key ) ;
#endif

/*--------------------------------------------------------------------------*/

#ifdef	LBA_EDITOR
extern	void	DrawRepereXYZ( S32 x0, S32 y0, S32 x1, S32 y1 ) ;
extern	void	DrawCameraInfos( void ) ;
extern	void	MenuCreateExtZones( void ) ;
#endif

/*様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様*/
