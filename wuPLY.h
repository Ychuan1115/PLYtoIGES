#ifndef WUPLY_H
#define WUPLY_H

// =============================================================================================================
//  �N���X�錾
// =============================================================================================================
class CwuPLY{

public:
	
	// �R���X�g���N�^
	CwuPLY();

	// �֐��̃v���g�^�C�v�錾
	int getVertexCount();
	void setDebug(bool b);
	int openPLY(char *readfilename);
	int saveIGES(char *savefilename);

private:

	// IGES�t�@�C���̍\���̐錾
	struct IGES{
		char *DelimChar;			// �f���~�^����
		char *EndDelimChar;			// �I���f���~�^����
		char *Softname;				// ���M�V�X�e���̑��M�h�c
		char *Filename;				// �t�@�C����
		char *SystemID;				// �V�X�e���h�c
		char *AnsiStdVer;			// ANSI�W���|��o�[�W����
		int IntNumBits;				// �����r�b�g��
		int IndexNumBitsSingle;		// �P���x�̎w���r�b�g��
		int MantissaNumBitsSingle;	// �P���x�̉����r�b�g��
		int IndexNumBitsDouble;		// �{���x�̎w���r�b�g��
		int MantissaNumBitsDouble;	// �{���x�̎w���r�b�g��
		char *ReceiveSystemID;		// ��M�V�X�e�����i�h�c
		int ScaleModelSpace;		// ���f����Ԃ̃X�P�[��
		int UnitFlag;				// �P�ʃt���O
		char *Unit;					// �P��
		int MaxStep;				// �����̍��ݒl�̍ő�l
		double MaxLineSize;			// �ő�����T�C�Y
		char *FileCreateDate;		// �t�@�C���쐬����
		double MinResolution;		// ���[�U�̊�]�ŏ��𑜓x
		double MaxCoordinate;		// �ő���W�l
		char *AuthorName;			// �쐬�Җ�
		char *OrganizationName;		// �g�D��
		int IgesVer;				// �Q��IGES�d�l�o�[�W����
		int ReferenceCode;			// �Q�Ɛ��}�K�i�R�[�h
		char *ModelCreateDate;		// ���f���ŏI�쐬�ύX����
	};

	// IGES�|�C���g�f�[�^�̍\���̐錾
	struct IGESPoint{
		int Element;				// �v�f�ԍ� �i�_��116�j
		int CardSeq;				// �����ԍ�
		int IgesVer;				// IGES�̃o�[�W����
		int LineType;				// ����i1:�����j
		int Level;					// ���x���i���C���ԍ��j
		int Tousyozu;				// ���ې}�i0�Œ�j
		int TransMatrix;			// �ϊ��s��i0�Œ�j
		int CouplingElement;		// �����v�f
		char *Status;				// �X�e�[�^�X
		int LineWidth;				// ����
		int PenType;				// �y���ԍ��i1:���@2:�ԁ@3:�΁@4:�@5:���@6:�}�[���_�@7:�V�A���@8:���j
		int CardLength;				// �J�[�h��
		int NumberFormat;			// �`���ԍ�
		char *Reserve1;				// �\���P
		char *Reserve2;				// �\���Q
		char *Label;				// �v�f���x��
		int SubScript;				// �T�u�X�N���v�g
		int Seq;					// �f�B���N�g���G���g���Z�N�V�����̃V�[�P���X
	};

	// �_�Q�̍\���̐錾
	struct vertex{
		double x;
		double y;
		double z;

		int r;
		int g;
		int b;

		IGESPoint igesp;
	};

	bool debug;				// �f�o�b�O���[�h
	int view_ratio;		// �i�����̕\����

	int vertex_count;		// �_�Q�̐�
	int header_count;		// �w�b�_�[�Z�N�V�����̃J�E���g
	int global_count;		// �O���[�o���Z�N�V�����̃J�E���g
	int direct_count;		// �f�B���N�g���G���g���Z�N�V�����̃J�E���g
	int param_count;		// �p�����[�^�f�[�^�Z�N�V�����̃J�E���g

	vertex *ver;			// �_�Q�����̍\���̔z��
	IGES iges;				// IGES�ɕۑ����鎞�Ɏg�p����\����
	IGESPoint igespoint;	// IGES��Point�f�[�^�����l�ێ��p
	
};



#endif