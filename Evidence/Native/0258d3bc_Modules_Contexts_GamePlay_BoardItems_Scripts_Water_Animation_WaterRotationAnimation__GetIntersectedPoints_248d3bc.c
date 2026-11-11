/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterRotationAnimation$$GetIntersectedPoints
System_ValueTuple_Vector3__Vector3__o Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__GetIntersectedPoints (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation_o* __this, UnityEngine_Vector3_o topLeft, UnityEngine_Vector3_o topRight, int32_t waterBottom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterRotationAnimation$$GetIntersectedPoints
   System_ValueTuple_Vector3__Vector3__o
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__GetIntersectedPoints
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation_o* __this,
   UnityEngine_Vector3_o topLeft, UnityEngine_Vector3_o topRight, int32_t waterBottom, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__GetIntersectedPoints_248d3bc
               (undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
               undefined8 param_6,long param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uStack_78;
  
  uVar17 = param_3;
  if ((bRam0000000005c2b287 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05809010);
    FUN_012d0dc8(PTR_DAT_05807d20);
    FUN_012d0dc8(PTR_DAT_0575b9e0);
    FUN_012d0dc8(PTR_DAT_05793f20);
    FUN_012d0dc8(PTR_DAT_0577bf88);
    FUN_012d0dc8(PTR_DAT_05799ed8);
    bRam0000000005c2b287 = 1;
  }
  uStack_78 = 0;
  if ((*(long *)(param_7 + 0x18) != 0) &&
     (lVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_Water_BottleOutlines__GetOutline_26089f0
                        (*(long *)(param_7 + 0x18),param_8,0), puVar3 = PTR_DAT_0577bf88, lVar5 != 0
     )) {
    lVar5 = Tests_BottleOutline__GetLocalPositions_3af52f4(lVar5,0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if ((lVar6 != 0) &&
       (System_Collections_Generic_List_Vector3____ctor_2275524
                  (lVar6,*(undefined8 *)PTR_DAT_05807d20), puVar4 = PTR_DAT_05809010,
       puVar3 = PTR_DAT_05793f20, lVar5 != 0)) {
      if (0 < *(int *)(lVar5 + 0x18)) {
        iVar11 = 0;
        uVar7 = uVar17;
        do {
          uVar12 = System_Collections_Generic_List_Vector3___get_Item_2275a94
                             (lVar5,iVar11,*(undefined8 *)puVar3);
          iVar1 = 0;
          if (iVar11 != *(int *)(lVar5 + 0x18) + -1) {
            iVar1 = iVar11 + 1;
          }
          uVar16 = uVar7;
          uVar13 = System_Collections_Generic_List_Vector3___get_Item_2275a94
                             (lVar5,iVar1,*(undefined8 *)puVar3);
          uVar17 = param_3;
          param_4 = param_5;
          uVar7 = Modules_Infrastructure_Utils_LineUtils__TryLineLineIntersection_3de33c8
                            (param_2,param_3,param_5,param_6,uVar12,uVar7,uVar13,uVar16,&uStack_78,0
                            );
          if ((uVar7 & 1) != 0) {
            uVar17 = (ulong)uStack_78._4_4_;
            lVar8 = *(long *)(lVar6 + 0x10);
            lVar10 = *(long *)puVar4;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_0258d67c;
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              lVar8 = lVar8 + (long)(int)uVar2 * 0xc;
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              *(undefined4 *)(lVar8 + 0x20) = (undefined4)uStack_78;
              *(uint *)(lVar8 + 0x24) = uStack_78._4_4_;
              *(undefined4 *)(lVar8 + 0x28) = 0;
            }
            else {
              param_4 = 0;
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))
                        (uStack_78 & 0xffffffff,uVar17,0,lVar6);
            }
          }
          iVar11 = iVar11 + 1;
          uVar7 = uVar17;
        } while (iVar11 < *(int *)(lVar5 + 0x18));
      }
      puVar4 = PTR_DAT_05799ed8;
      if (*(int *)(lVar6 + 0x18) == 2) {
        uVar14 = System_Collections_Generic_List_Vector3___get_Item_2275a94
                           (lVar6,0,*(undefined8 *)puVar3);
        uVar7 = uVar17;
        uVar16 = param_4;
        uVar15 = System_Collections_Generic_List_Vector3___get_Item_2275a94
                           (lVar6,1,*(undefined8 *)puVar3);
      }
      else {
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        puVar9 = *(uint **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar15 = (ulong)*puVar9;
        uVar7 = (ulong)puVar9[1];
        uVar16 = (ulong)puVar9[2];
        uVar14 = uVar15;
        uVar17 = uVar7;
        param_4 = uVar16;
      }
      uVar12 = *(undefined8 *)puVar4;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      System_ValueTuple_Vector3__Vector3____ctor_28e3f00
                (uVar14,uVar17,param_4,uVar15,uVar7,uVar16,param_1,uVar12);
      return;
    }
  }
LAB_0258d67c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

