/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$AddMissingMonthModel
void Modules_Contexts_Home_Daily_Scripts_DailyDataService__AddMissingMonthModel (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, System_DateTime_o dateTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$AddMissingMonthModel
   void Modules_Contexts_Home_Daily_Scripts_DailyDataService__AddMissingMonthModel
   (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, System_DateTime_o dateTime,
   const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyDataService__AddMissingMonthModel_4103728
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_0579c280;
  if ((bRam0000000005c3ab80 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780a98);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_05819c50);
    FUN_012d0dc8(PTR_DAT_057a65b0);
    FUN_012d0dc8(PTR_DAT_057caef8);
    FUN_012d0dc8(PTR_DAT_05774030);
    FUN_012d0dc8(PTR_DAT_0579c280);
    bRam0000000005c3ab80 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    System_Object___ctor_23dfe5c(lVar5,0);
    puVar12 = (undefined8 *)(lVar5 + 0x10);
    *puVar12 = param_2;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057a65b0);
      puVar2 = PTR_DAT_05819c50;
      if (lVar6 != 0) {
        System_Func_object__bool____ctor_338137c(lVar6,lVar5,*(undefined8 *)PTR_DAT_05774030,0);
        uVar7 = System_Linq_Enumerable__Any_object__2417a98(uVar11,lVar6,*(undefined8 *)puVar2);
        if ((uVar7 & 1) != 0) {
          return;
        }
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05780a98);
        puVar2 = PTR_DAT_0580b9d0;
        if (lVar5 != 0) {
          System_Object___ctor_23dfe5c(lVar5,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar3 = System_DateTime__get_Year_21007a4(puVar12,0);
          uVar4 = System_DateTime__get_Month_21004b8(puVar12,0);
          uStack_38 = 0;
          System_DateTime___ctor_20fda84(&uStack_38,uVar3,uVar4,1,0);
          *(undefined8 *)(lVar5 + 0x10) = uStack_38;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar6 != 0)) {
            lVar8 = *(long *)(lVar6 + 0x10);
            lVar10 = *(long *)PTR_DAT_057caef8;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *plVar9 = lVar5;
                FUN_012d0d74(plVar9,lVar5);
              }
              else {
                (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))
                          (lVar6,lVar5);
              }
              *(undefined2 *)(param_1 + 0x18) = 0x101;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

