// ALL SKIP STATEMENTS THAT AFFECT THIS SHADER!!!
// ( $FLATTEN_STATIC_CONTROL_FLOW == 0 ) && ( $NUM_LIGHTS > 0 )  [PC]
// defined $LIGHTING_PREVIEW && defined $FASTPATH && $LIGHTING_PREVIEW && $FASTPATH
#include "shaderlib/cshader.h"
class prototype_vs20_Static_Index
{
private:
	int m_nVERTEXCOLOR;
#ifdef _DEBUG
	bool m_bVERTEXCOLOR;
#endif
public:
	void SetVERTEXCOLOR( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nVERTEXCOLOR = i;
#ifdef _DEBUG
		m_bVERTEXCOLOR = true;
#endif
	}
	void SetVERTEXCOLOR( bool i )
	{
		Assert( ( i ? 1 : 0 ) >= 0 && ( i ? 1 : 0 ) <= 1 );
		m_nVERTEXCOLOR = i ? 1 : 0;
#ifdef _DEBUG
		m_bVERTEXCOLOR = true;
#endif
	}
private:
	int m_nFLATTEN_STATIC_CONTROL_FLOW;
#ifdef _DEBUG
	bool m_bFLATTEN_STATIC_CONTROL_FLOW;
#endif
public:
	void SetFLATTEN_STATIC_CONTROL_FLOW( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nFLATTEN_STATIC_CONTROL_FLOW = i;
#ifdef _DEBUG
		m_bFLATTEN_STATIC_CONTROL_FLOW = true;
#endif
	}
	void SetFLATTEN_STATIC_CONTROL_FLOW( bool i )
	{
		Assert( ( i ? 1 : 0 ) >= 0 && ( i ? 1 : 0 ) <= 1 );
		m_nFLATTEN_STATIC_CONTROL_FLOW = i ? 1 : 0;
#ifdef _DEBUG
		m_bFLATTEN_STATIC_CONTROL_FLOW = true;
#endif
	}
public:
	// CONSTRUCTOR
	prototype_vs20_Static_Index( IShaderShadow *pShaderShadow, IMaterialVar **params )
	{
#ifdef _DEBUG
		m_bVERTEXCOLOR = false;
#endif // _DEBUG
		m_nVERTEXCOLOR = 0;
#ifdef _DEBUG
		m_bFLATTEN_STATIC_CONTROL_FLOW = false;
#endif // _DEBUG
		m_nFLATTEN_STATIC_CONTROL_FLOW = 0;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllStaticVarsDefined = m_bVERTEXCOLOR && m_bFLATTEN_STATIC_CONTROL_FLOW;
		Assert( bAllStaticVarsDefined );
#endif // _DEBUG
		return ( 80 * m_nVERTEXCOLOR ) + ( 160 * m_nFLATTEN_STATIC_CONTROL_FLOW ) + 0;
	}
};
#define shaderStaticTest_prototype_vs20 vsh_forgot_to_set_static_VERTEXCOLOR + vsh_forgot_to_set_static_FLATTEN_STATIC_CONTROL_FLOW + 0
class prototype_vs20_Dynamic_Index
{
private:
	int m_nSKINNING;
#ifdef _DEBUG
	bool m_bSKINNING;
#endif
public:
	void SetSKINNING( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSKINNING = i;
#ifdef _DEBUG
		m_bSKINNING = true;
#endif
	}
	void SetSKINNING( bool i )
	{
		Assert( ( i ? 1 : 0 ) >= 0 && ( i ? 1 : 0 ) <= 1 );
		m_nSKINNING = i ? 1 : 0;
#ifdef _DEBUG
		m_bSKINNING = true;
#endif
	}
private:
	int m_nCOMPRESSED_VERTS;
#ifdef _DEBUG
	bool m_bCOMPRESSED_VERTS;
#endif
public:
	void SetCOMPRESSED_VERTS( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nCOMPRESSED_VERTS = i;
#ifdef _DEBUG
		m_bCOMPRESSED_VERTS = true;
#endif
	}
	void SetCOMPRESSED_VERTS( bool i )
	{
		Assert( ( i ? 1 : 0 ) >= 0 && ( i ? 1 : 0 ) <= 1 );
		m_nCOMPRESSED_VERTS = i ? 1 : 0;
#ifdef _DEBUG
		m_bCOMPRESSED_VERTS = true;
#endif
	}
private:
	int m_nDYNAMIC_LIGHT;
#ifdef _DEBUG
	bool m_bDYNAMIC_LIGHT;
#endif
public:
	void SetDYNAMIC_LIGHT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nDYNAMIC_LIGHT = i;
#ifdef _DEBUG
		m_bDYNAMIC_LIGHT = true;
#endif
	}
	void SetDYNAMIC_LIGHT( bool i )
	{
		Assert( ( i ? 1 : 0 ) >= 0 && ( i ? 1 : 0 ) <= 1 );
		m_nDYNAMIC_LIGHT = i ? 1 : 0;
#ifdef _DEBUG
		m_bDYNAMIC_LIGHT = true;
#endif
	}
private:
	int m_nSTATIC_LIGHT;
#ifdef _DEBUG
	bool m_bSTATIC_LIGHT;
#endif
public:
	void SetSTATIC_LIGHT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nSTATIC_LIGHT = i;
#ifdef _DEBUG
		m_bSTATIC_LIGHT = true;
#endif
	}
	void SetSTATIC_LIGHT( bool i )
	{
		Assert( ( i ? 1 : 0 ) >= 0 && ( i ? 1 : 0 ) <= 1 );
		m_nSTATIC_LIGHT = i ? 1 : 0;
#ifdef _DEBUG
		m_bSTATIC_LIGHT = true;
#endif
	}
private:
	int m_nNUM_LIGHTS;
#ifdef _DEBUG
	bool m_bNUM_LIGHTS;
#endif
public:
	void SetNUM_LIGHTS( int i )
	{
		Assert( i >= 0 && i <= 4 );
		m_nNUM_LIGHTS = i;
#ifdef _DEBUG
		m_bNUM_LIGHTS = true;
#endif
	}
	void SetNUM_LIGHTS( bool i )
	{
		Assert( ( i ? 1 : 0 ) >= 0 && ( i ? 1 : 0 ) <= 4 );
		m_nNUM_LIGHTS = i ? 1 : 0;
#ifdef _DEBUG
		m_bNUM_LIGHTS = true;
#endif
	}
public:
	// CONSTRUCTOR
	prototype_vs20_Dynamic_Index( IShaderDynamicAPI *pShaderAPI )
	{
#ifdef _DEBUG
		m_bSKINNING = false;
#endif // _DEBUG
		m_nSKINNING = 0;
#ifdef _DEBUG
		m_bCOMPRESSED_VERTS = false;
#endif // _DEBUG
		m_nCOMPRESSED_VERTS = 0;
#ifdef _DEBUG
		m_bDYNAMIC_LIGHT = false;
#endif // _DEBUG
		m_nDYNAMIC_LIGHT = 0;
#ifdef _DEBUG
		m_bSTATIC_LIGHT = false;
#endif // _DEBUG
		m_nSTATIC_LIGHT = 0;
#ifdef _DEBUG
		m_bNUM_LIGHTS = false;
#endif // _DEBUG
		m_nNUM_LIGHTS = 0;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllDynamicVarsDefined = m_bSKINNING && m_bCOMPRESSED_VERTS && m_bDYNAMIC_LIGHT && m_bSTATIC_LIGHT && m_bNUM_LIGHTS;
		Assert( bAllDynamicVarsDefined );
#endif // _DEBUG
		return ( 1 * m_nSKINNING ) + ( 2 * m_nCOMPRESSED_VERTS ) + ( 4 * m_nDYNAMIC_LIGHT ) + ( 8 * m_nSTATIC_LIGHT ) + ( 16 * m_nNUM_LIGHTS ) + 0;
	}
};
#define shaderDynamicTest_prototype_vs20 vsh_forgot_to_set_dynamic_SKINNING + vsh_forgot_to_set_dynamic_COMPRESSED_VERTS + vsh_forgot_to_set_dynamic_DYNAMIC_LIGHT + vsh_forgot_to_set_dynamic_STATIC_LIGHT + vsh_forgot_to_set_dynamic_NUM_LIGHTS + 0

static const ShaderComboInformation_t s_DynamicComboArray_prototype_vs20[5] = 
{
	{ "SKINNING", 0, 1 },
	{ "COMPRESSED_VERTS", 0, 1 },
	{ "DYNAMIC_LIGHT", 0, 1 },
	{ "STATIC_LIGHT", 0, 1 },
	{ "NUM_LIGHTS", 0, 4 },
};

static const ShaderComboInformation_t s_StaticComboArray_prototype_vs20[2] = 
{
	{ "VERTEXCOLOR", 0, 1 },
	{ "FLATTEN_STATIC_CONTROL_FLOW", 0, 1 },
};
static const ShaderComboSemantics_t prototype_vs20_combos =
{
	"prototype_vs20", s_DynamicComboArray_prototype_vs20, 5, s_StaticComboArray_prototype_vs20, 2 
};

class ConstructMe_prototype_vs20
{
public:
	ConstructMe_prototype_vs20()
	{
		GetShaderDLL()->AddShaderComboInformation( &prototype_vs20_combos );
	}
};

static ConstructMe_prototype_vs20 s_ConstructMe_prototype_vs20;
