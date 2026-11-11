/* IL2CPP: Modules.Contexts.Application.Player.Scripts.LevelTextView$$Awake
void Modules_Contexts_Application_Player_Scripts_LevelTextView__Awake (Modules_Contexts_Application_Player_Scripts_LevelTextView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Player.Scripts.LevelTextView$$Awake
   void Modules_Contexts_Application_Player_Scripts_LevelTextView__Awake
   (Modules_Contexts_Application_Player_Scripts_LevelTextView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_Application_Player_Scripts_LevelTextView__Awake_3cecad8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  int iStack_48;
  undefined4 uStack_44;
  
  puVar1 = PTR_DAT_057b8520;
                    /* try { // try from 03decae4 to 03eecaeb has its CatchHandler @ 03deced4 */
  if ((bRam0000000005c370fc & 1) == 0) {
                    /* try { // try from 03decb08 to 03eecb17 has its CatchHandler @ 03dececc */
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057882b0);
    FUN_012d0dc8(PTR_DAT_0577a140);
                    /* try { // try from 03decb24 to 03eecb3f has its CatchHandler @ 03decf90 */
    FUN_012d0dc8(PTR_DAT_0576ad30);
    FUN_012d0dc8(PTR_DAT_05811368);
    FUN_012d0dc8(PTR_DAT_057b8520);
                    /* try { // try from 03decb48 to 03eecb4f has its CatchHandler @ 03decec8 */
    bRam0000000005c370fc = 1;
  }
  puVar2 = PTR_DAT_05811368;
  puVar3 = PTR_DAT_0578b048;
                    /* try { // try from 03decb68 to 03eecb73 has its CatchHandler @ 03dece38 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  puVar1 = PTR_DAT_057882b0;
  if (lVar5 != 0) {
                    /* try { // try from 03decb94 to 03eecb97 has its CatchHandler @ 03dece14 */
                    /* try { // try from 03decba4 to 03eecbb3 has its CatchHandler @ 03dece54 */
    System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057882b0,0);
    puVar2 = PTR_DAT_0577a140;
    if (lVar4 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar4,lVar5,0);
                    /* try { // try from 03decbc8 to 03eecbcb has its CatchHandler @ 03dece50 */
      lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
                    /* try { // try from 03decbd4 to 03eecbdb has its CatchHandler @ 03dece4c */
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    /* try { // try from 03decbf4 to 03eecbff has its CatchHandler @ 03dece24 */
      if ((lVar5 != 0) &&
         (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar1,0),
         puVar2 = PTR_DAT_0576ad30, lVar4 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar4,lVar5,0);
        lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    /* try { // try from 03decc40 to 03eecc4b has its CatchHandler @ 03dece1c */
        if ((lVar5 != 0) &&
           (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar1,0), lVar4 != 0)) {
                    /* try { // try from 03decc4c to 03eeccb3 has its CatchHandler @ 03dec6d4 */
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar4,lVar5,0);
          puVar1 = PTR_DAT_0576aae0;
          if ((bRam0000000005c370fe & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057a1e60);
            FUN_012d0dc8(PTR_DAT_0576aae0);
            FUN_012d0dc8(PTR_DAT_057bc5e8);
            FUN_012d0dc8(PTR_DAT_057636d0);
            FUN_012d0dc8(PTR_DAT_057db748);
            FUN_012d0dc8(PTR_DAT_057c9ca0);
            FUN_012d0dc8(PTR_DAT_0576e4b8);
            bRam0000000005c370fe = 1;
          }
          puVar3 = PTR_DAT_057bc5e8;
          uStack_44 = 0;
          if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
             (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) {
            plVar6 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                       (lVar4,*(undefined8 *)PTR_DAT_057a1e60);
            plVar12 = *(long **)(param_1 + 0x18);
            uVar7 = *(undefined8 *)(param_1 + 0x20);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar3);
            }
            uVar7 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900(uVar7,0);
            puVar2 = PTR_DAT_057db748;
            puVar3 = PTR_DAT_0576e4b8;
            puVar1 = PTR_DAT_057636d0;
            if (plVar6 != (long *)0x0) {
              lVar4 = *plVar6;
              uVar10 = (ulong)*(ushort *)(lVar4 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar8 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_03decdc4;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057636d0,1);
LAB_03decdc4:
              iStack_48 = (*(code *)*puVar8)(plVar6,puVar8[1]);
              iStack_48 = *(int *)(param_1 + 0x30) + iStack_48;
              uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_48);
              uVar7 = System_String__Format_1ed15fc
                                (*(undefined8 *)puVar3,uVar7,uVar9,*(undefined8 *)(param_1 + 0x28),0
                                );
              puVar3 = PTR_DAT_057c9ca0;
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x558))(plVar12,uVar7,*(undefined8 *)(*plVar12 + 0x560));
                uVar10 = System_String__op_Equality_1ec12e0
                                   (*(undefined8 *)(param_1 + 0x20),
                                    **(undefined8 **)(*(long *)puVar3 + 0xb8),0);
                if (((uVar10 & 1) != 0) &&
                   (uVar10 = System_String__op_Equality_1ec12e0
                                       (*(undefined8 *)(param_1 + 0x28),
                                        **(undefined8 **)(*(long *)puVar3 + 0xb8),0),
                   (uVar10 & 1) != 0)) {
                  lVar4 = *plVar6;
                  plVar12 = *(long **)(param_1 + 0x18);
                  uVar10 = (ulong)*(ushort *)(lVar4 + 0x12a);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                        puVar8 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                        goto LAB_03deceb8;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,1);
LAB_03deceb8:
                  uStack_44 = (*(code *)*puVar8)(plVar6,puVar8[1]);
                  uVar7 = System_Int32__ToString_26c9768(&uStack_44,0);
                  if (plVar12 == (long *)0x0) goto LAB_03decf08;
                  (**(code **)(*plVar12 + 0x558))(plVar12,uVar7,*(undefined8 *)(*plVar12 + 0x560));
                }
                return;
              }
            }
          }
LAB_03decf08:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

