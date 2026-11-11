/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.TargetBreakParticleController$$SetColor
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__SetColor (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.TargetBreakParticleController$$SetColor
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__SetColor
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController_o* __this,
   UnityEngine_Color_o color, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__SetColor_274ae8c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_28;
  
  if ((bRam0000000005c2c6bb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05768d48);
    FUN_012d0dc8(PTR_DAT_057b0a60);
    FUN_012d0dc8(PTR_DAT_057accc8);
    FUN_012d0dc8(PTR_DAT_057db9c8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2c6bb = 1;
  }
  puVar3 = PTR_DAT_057b0a60;
  puVar2 = PTR_DAT_0576c200;
  puVar1 = PTR_DAT_05768d48;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  uStack_28 = 0;
  if (*(long *)(param_5 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_a8,*(long *)(param_5 + 0x18),*(undefined8 *)PTR_DAT_057db9c8);
    uStack_68 = uStack_a0;
    uStack_70 = uStack_a8;
    lStack_60 = lStack_98;
    while( true ) {
      do {
        uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_70,*(undefined8 *)puVar3);
        lVar4 = lStack_60;
        if ((uVar5 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_70,*(undefined8 *)puVar1);
          return;
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar5 = UnityEngine_Object__op_Equality_407f288(lVar4,0,0);
      } while ((uVar5 & 1) != 0);
      if (lVar4 == 0) break;
      uStack_28 = UnityEngine_ParticleSystem__get_main_3abc8e0(lVar4,0);
      UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_3abd3a8
                (&uStack_a8,param_1,param_2,param_3,param_4,0);
      uStack_d8 = uStack_a0;
      uStack_e0 = uStack_a8;
      uStack_c8 = uStack_90;
      lStack_d0 = lStack_98;
      uStack_b8 = uStack_80;
      uStack_c0 = uStack_88;
      uStack_b0 = uStack_78;
      UnityEngine_ParticleSystem_MainModule__set_startColor_3abcd84(&uStack_28,&uStack_e0,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

