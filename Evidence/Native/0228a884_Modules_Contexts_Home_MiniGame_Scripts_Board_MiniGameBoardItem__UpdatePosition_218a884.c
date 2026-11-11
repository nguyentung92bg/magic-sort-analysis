/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItem$$UpdatePosition
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__UpdatePosition (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItem$$UpdatePosition
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__UpdatePosition
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__UpdatePosition_218a884
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000005c29d57 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057961e8);
    FUN_012d0dc8(PTR_DAT_0580de08);
    FUN_012d0dc8(PTR_DAT_0577e170);
    FUN_012d0dc8(PTR_DAT_0580b718);
    FUN_012d0dc8(PTR_DAT_05813a78);
    bRam0000000005c29d57 = 1;
  }
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  lVar3 = *(long *)(param_4 + 0x30);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x20) != 0) {
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
        lVar3 = *(long *)(param_4 + 0x30);
        if (lVar3 == 0) goto LAB_0228aa14;
      }
      puVar2 = PTR_DAT_0580de08;
      puVar1 = PTR_DAT_057961e8;
      pfVar5 = *(float **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      fVar9 = *pfVar5;
      fVar8 = pfVar5[1];
      fVar7 = pfVar5[2];
      System_Collections_Generic_HashSet_object___GetEnumerator_200b184
                (&uStack_78,lVar3,*(undefined8 *)PTR_DAT_0580b718);
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      lStack_50 = lStack_68;
      while (uVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext_3ea8360
                               (&uStack_60,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
        if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar3 = UnityEngine_Component__get_transform_408b444(lStack_50,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        fVar6 = (float)UnityEngine_Transform__get_position_4092b08(lVar3,0);
        fVar9 = fVar9 + fVar6;
        fVar8 = fVar8 + param_2;
        fVar7 = fVar7 + param_3;
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose_3ea835c
                (&uStack_60,*(undefined8 *)puVar1);
      lVar3 = UnityEngine_Component__get_transform_408b444(param_4,0);
      if ((*(long *)(param_4 + 0x30) == 0) || (lVar3 == 0)) goto LAB_0228aa14;
      fVar6 = (float)*(int *)(*(long *)(param_4 + 0x30) + 0x20);
      UnityEngine_Transform__set_position_4092ba8(fVar9 / fVar6,fVar8 / fVar6,fVar7 / fVar6,lVar3,0)
      ;
    }
    return;
  }
LAB_0228aa14:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

