#ifndef __HEADER_VNUM_HELPER__
#define	__HEADER_VNUM_HELPER__

/**
	�̹� �����ϰų� ������ �߰��� ������, �� ���� �ҽ����� �ĺ��� �� ����� ���
	�ĺ���(����=VNum)�� �ϵ��ڵ��ϴ� ������� �Ǿ��־ �������� �ſ� �������µ�

	�����δ� �ҽ��� ���� � ������(Ȥ�� ��)���� �� �� �ְ� ���ڴ� ��ö���� �������� �߰�.

		* �� ������ ������ ���������� ����Ǵµ� PCH�� ������ �ٲ� ������ ��ü ������ �ؾ��ϴ� 
		�ϴ��� �ʿ��� cpp���Ͽ��� include �ؼ� ������ ����.

		* cpp���� �����ϸ� ������ ~ ��ũ�ؾ��ϴ� �׳� common�� ����� �־���. (game, db������Ʈ �� �� ��� ����)

	@date	2011. 8. 29.
*/


class CItemVnumHelper
{
public:
	/// ���� DVD�� �һ��� ��ȯ��
	static	const bool	IsPhoenix(DWORD vnum)				{ return 53001 == vnum; }		// NOTE: �һ��� ��ȯ �������� 53001 ������ mob-vnum�� 34001 �Դϴ�.

	/// �󸶴� �̺�Ʈ �ʽ´��� ���� (������ �󸶴� �̺�Ʈ�� Ư�� �������̾����� ������ ���� �������� ��Ȱ���ؼ� ��� ���ٰ� ��)
	static	const bool	IsRamadanMoonRing(DWORD vnum)		{ return 71135 == vnum; }

	/// �ҷ��� ���� (������ �ʽ´��� ������ ����)
	static	const bool	IsHalloweenCandy(DWORD vnum)		{ return 71136 == vnum; }

	/// ũ�������� �ູ�� ����
	static	const bool	IsHappinessRing(DWORD vnum)		{ return 71143 == vnum; }

	/// �߷�Ÿ�� ����� �Ҵ�Ʈ 
	static	const bool	IsLovePendant(DWORD vnum)		{ return 71145 == vnum; }
	
    static    const bool    IsWillRing(DWORD vnum)        { return 71148 == vnum; }
    static    const bool    IsDeadlyRing(DWORD vnum)        { return 71149 == vnum; }
    static    const bool    IsHeroMedal(DWORD vnum)        { return 71158 == vnum; }
    static    const bool    IsBlueCandy(DWORD vnum)        { return 71180 == vnum; }
    static    const bool    IsGreenCandy(DWORD vnum)        { return 71181 == vnum; }
    static    const bool    IsYellowCandy(DWORD vnum)        { return 71188 == vnum; }
    static    const bool    IsChocolatePendant(DWORD vnum)        { return 71199 == vnum; }
    static    const bool    IsEvilPendant(DWORD vnum)        { return 71202 == vnum; }
    static    const bool    IsGuardPendant(DWORD vnum)        { return 72054 == vnum; }
};

class CMobVnumHelper
{
public:
	/// ���� DVD�� �һ��� �� ��ȣ
	static	bool	IsPhoenix(DWORD vnum)				{ return 34001 == vnum; }
	static	bool	IsIcePhoenix(DWORD vnum)				{ return 34003 == vnum; }
	/// PetSystem�� �����ϴ� ���ΰ�?
	static	bool	IsPetUsingPetSystem(DWORD vnum)	{ return (IsPhoenix(vnum) || IsReindeerYoung(vnum)) || IsIcePhoenix(vnum); }

	/// 2011�� ũ�������� �̺�Ʈ�� �� (�Ʊ� ����)
	static	bool	IsReindeerYoung(DWORD vnum)	{ return 34002 == vnum; }

	/// �󸶴� �̺�Ʈ ����� �渶(20119) .. �ҷ��� �̺�Ʈ�� �󸶴� �渶 Ŭ��(������ ����, 20219)
	static	bool	IsRamadanBlackHorse(DWORD vnum)		{ return 20119 == vnum || 20219 == vnum || 22022 == vnum; }
};

class CVnumHelper
{
};


#endif	//__HEADER_VNUM_HELPER__

